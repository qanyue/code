#include<iostream>
#include<string>
using namespace std;
void add(string& num1,string& num2);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string num1 ,num2;
    cin >> num1 >> num2;
    
    add(num1,num2);
    return 0;
}

void add(string& num1,string& num2)
{
    
    size_t len1{num1.length()},len2{num2.length()};
    if(len1 < 19 || len2 <19)
    {
        return 
    }
    bool isBiger = true;
    size_t big;
    size_t small{len1>len2?(num1 = "0" + num1,big = ++len1,len2):
        (num2 = "0" + num2,big = ++len2,isBiger = false,len1)};
    if(isBiger)
    {
        for(int i = big-1,j=small-1;j>=0&&i>=0;--j,--i)
        {
            num1.at(i) += num2.at(j) - '0';
            if(num1.at(i) -'0' >= 10)
            {
                num1.at(i) -= 10;
                ++num1.at(i-1);
            }
        }
    }
    else
    {
     for(int i = big-1,j=small-1;j>=0&&i>=0;--j,--i)
            {
                num2.at(i) += num1.at(j) - '0';
                if(num2.at(i) -'0' >= 10)
                {
                    num2.at(i) -= 10;
                    ++num2.at(i-1);
                }
            }
    }
    if(isBiger)
    {
        if(num1.at(0) == '0')
        {
            cout <<num1.substr(1) << "\n";
        }
        else
        {
            cout << num1 <<"\n";
        }
    }
    else
    {
        if(num2.at(0) == '0')
        {
            cout <<num2.substr(1) << "\n";
        }
        else
        {
            cout << num2 <<"\n";
        }
    }
    

}
