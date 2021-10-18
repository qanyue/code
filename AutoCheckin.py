import os
import time
import datetime
from selenium import webdriver
import sys
from selenium.webdriver.chrome.options import Options

#UID = os.environ["USERNAME"]
#PWD = os.environ["PASSWORD"]

UID = '1906010412'
PWD = '9aoduojkl'

def loadSend():
    print("加载推送功能")
    global send
    cur_path = os.path.abspath(os.path.dirname(__file__))
    sys.path.append(cur_path)
    print(cur_path)
    print(sys.path)
    if os.path.exists(cur_path + "/sendNotify.py"):
        try:
            from deleteDuplicateTasksNotify import send
        except:
            print("加载通知服务失败~")

#出错处理
def is_element_present(browser, xpath):
    from selenium.common.exceptions import NoSuchElementException

    try:
        element = browser.find_element_by_xpath(xpath)
    except NoSuchElementException as e:
        print(e)
        return False
    else:
        return True

#登录打卡
def sign_in(uid, pwd):
    msg=""
    url=""
    img_list=list()
    a_list=list()
    # set to no-window
    chrome_options = Options()
    chrome_options.add_argument("--headless")
    chrome_options.add_argument("--no-sandbox")
    
    loadSend()

    # simulate a browser to open the website
    cur_path = os.path.abspath(os.path.dirname(__file__))
    sys.path.append(cur_path)
    #os.chmod('/root/ql/scripts/chromedriver', 0o755)
    browser = webdriver.Chrome(options=chrome_options,executable_path=cur_path + "/chromedriver" )
    # browser = webdriver.Chrome()
    browser.get("http://ids.hhu.edu.cn/amserver/UI/Login?goto=http%3A%2F%2Fform.hhu.edu.cn%2Fpdc%2Fform%2Flist")
    # 打印当前页面title
    print(browser.title)

    try:
        # input uid and password
        print("Inputting the UID and Password of User {0}".format(uid))
        browser.find_element_by_id("IDToken1").send_keys(uid)
        browser.find_element_by_id("IDToken2").send_keys(pwd)
        # click to sign in
        #browser.find_element_by_xpath("/html/body/table[1]/tr[2]/td[1]/table[2]/tr[2]/td[2]/table[1]/tr[3]/td[1]/IMG[1]").click()
        img_list=browser.find_elements_by_tag_name("IMG")
        '''
        for li in img_list:
            print(li)
        '''
        img_list[4].click()
        time.sleep(3)
    
        #打印当前页面URL
        msg=browser.title
        url=browser.current_url
    
        print("Checking whether User {0} has signed in".format(uid))
        if msg == "防疫上报统计系统":
            print(msg)
            print(url)
            a_list=browser.find_elements_by_tag_name("a")
            a_list[0].click()
            time.sleep(2)
            msg=browser.title
            url=browser.current_url
            print(msg)
            print(url)
            browser.find_element_by_id("saveBtn").click()
            msg=browser.title
            url=browser.current_url
            print(msg)
            print(url)
        else:
            print('fail to sign')
            send("健康打卡","登录失败")
            return False

    except Exception as e:
        msg = "while signing in for user " + uid + " there is an exception: \n" + str(e)
        mail.mail(msg, MAIL_SENDER)
        send("健康打卡",msg)
    finally:
        browser.quit()
        
    # quit the browser
    print("Singing in for User {0} is finished".format(uid))
    return True

if __name__ == "__main__":
    flag=sign_in(UID,PWD)
    if flag==True:
        print("打卡成功!")
        send("健康打卡","打卡成功")
    else:
        print("打卡失败!")
        send("健康打卡","打卡失败")
        time.sleep(5)
        flag=sign_in(UID,PWD)
