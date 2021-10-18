#include <iostream>
#include<string>
#include<array>
using namespace std;
void minus2(const string & num1,const string& num2);
int main()
{
    
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string  num1{}, num2{};
    cin >> num1 >> num2;
    minus2(num1,num2);


    return 0;
}
void minus2(const string & num1,const string& num2)
{
    
    const int max_len = 100;
    array<int, max_len> a{};
    array<int, max_len> b{};
    bool flags = true;
    size_t len1{num1.length()},len2{num2.length()};
    if(len1 < len2 ||num1.compare(num2) < 0)
    {
        flags = false;
    }
    for(int i=len1-1,j=0;i>=0;--i) a[j++] = num1.at(i)-'0';
    for(int i=len2-1,j=0;i>=0;--i) b[j++] = num2.at(i)- '0';
    
    if(flags)
    {
        for(size_t i =0; i < len1; ++i)// 这里如果flags真num1位数一定大于等于num2
        {
            a[i] -= b[i];
            if(a[i] < 0)
            {
                a[i] += 10;
                --b[i+1];
            }
        }
    }
    else
    {
        for(size_t i = 0; i<len2;++i)
        {
            b[i] -= a[i];
            if(b[i] < 0)
            {
                b[i] += 10;
                --a[i+1];
            }
        }
        
    }
    if(flags)
    {
        bool status{true};
        for(int i =len1-1; i >=0;--i)
        {
            if(a[i]==0 &&status)
            {
                continue;
            }
            else
            {
                status = false;
                cout << a[i];
            }

        }
    }
    else
    {
        cout <<'-';
        bool status{true};
        for(int i =len2-1; i >=0;--i)
        {
            if(b[i]==0 &&status)
            {
                continue;
            }
            else
            {
                status = false;
                cout << b[i];
            }

        }

    }
}
