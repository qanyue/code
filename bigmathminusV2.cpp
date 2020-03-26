#include<iostream>
#include<string>
using namespace std;
size_t minus2(string &num1,string &num2);
int jiewei(string&mum1,int i);
int main()
{
    string num1, num2 ;
    char x;
    x=getchar();
    while(x != '0')
    {
    while(x <= '9' && x >='0')
    {
        num1.append(1,x);
        x = getchar();
    }
    num2 = to_string5*((num1.back()-'0'));
    while(minus2(num1,num2) > 18)
    num2 = to_string(5*(num1.back()-'0'));
    long long a = stoll(num1);
    if(a % 17 == 0)
    {
        putchar('1');
        putchar('\n');
    }else{
        putchar('0');
        putchar('0');
    }
        num1.clear();
        x =  getchar();
    }
    
    return 0;
}
size_t minus2(string &num1,string &num2)
{ 
    size_t len1{num1.length()},len2{num2.length()};
    if(len1 < 19)
    {
        return len1;
    }

    num1.erase(len1-1);
    --len1;
   
    bool flags {true};
    size_t big = len1;
    size_t small = len2;
    if(flags)
    {

        for(int i = big - 1,j = small -1;j >=0 && i >= 0;--i,--j)
        {
            num1.at(i) -= num2.at(j) - '0';
            jiewei(num1,i);
        }
    }
    else
    {
        for(int i = big - 1,j = small -1;j >=0 && i >= 0;--i,--j)
        {
            num2.at(i) -= num1.at(j) - '0';
            if(num2.at(i) -'0' < 0)
            {
                num2.at(i) += 10;
                --num2.at(i-1);
            }
        }
    }
    for(size_t i = 0;i < big; ++i)
    {
        if(num1.at(i) == '0')
        {
            --len1;
            continue;
        }
        else
        {
            break;
        }
    }
   
    return len1;
}
int jiewei(string& num1,int i)
{
    if(num1.at(i)-'0'>= 0)
    {
        return 1;
    }
    else
    {
        num1.at(i) += 10;
        num1.at(i-1)--;
        jiewei(num1,i-1);
    }
    return 0;
}
