#include<iostream>
#include<string>
using namespace std;
void minusv2(string&num1,string & num2);
bool jiewei(string& num1,int i);
void out(const string & num);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string num1,num2;
    cin >> num1 >> num2;
    minusv2(num1,num2);
    return 0;
}
void minusv2(string&num1,string & num2)
{
    size_t  len1{num1.length()},len2{num2.length()};
    bool isBiger {true};
    size_t big {};
    size_t small {len1 >= len2 ? (big = len1,len2): (isBiger = false,big = len2,len1)};
    if(len1==len2)
    {
        if(num1.compare(num2) > 0)
        {
            isBiger = true;
        }
        else
        {
            isBiger = false;
        }
    }
    if(isBiger)
    {
        for(int i = big-1,j = small -1;i>=0&&j>=0;--i,--j)
        {
            num1.at(i) -= (num2.at(j) - '0');
            jiewei(num1,i);
        } 
    }
    else
    {
        for(int i = big-1,j = small -1;i>=0&&j>=0;--i,--j)
        {
            num2.at(i) -= (num1.at(j) - '0');
            jiewei(num2,i);
        } 
    }
    
    if(isBiger)
    {
        out(num1);
    }
    else
    {
        cout << "-";
        out(num2);
    }

}
bool jiewei(string& num1,int i)
{
    if(num1.at(i)-'0' >= 0 || i < 0)
    {
        return true;
    }
    else
    {
        num1.at(i) += 10;
        --num1.at(i-1);
        jiewei(num1,i-1);
    }
    return true;
}
void out (const string& num)
{
    if(num.at(0) == '0')
    {
        cout << num.substr(1) << "\n";
    }
    else
    {
        cout << num << "\n";
    }
}
