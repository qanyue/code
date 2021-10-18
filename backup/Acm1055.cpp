#include<iostream>
#include<array>
#include<cmath>
using namespace std;

    int i{};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x{};
    cin >> x;
    if(x<8)
    {
        cout << x;
    } 
    int temp = floor(x/8);
    array<int,50> b{};
    while(temp>0)
    {
        b[i] = x%8;
        i++;
        if(temp < 8)
        {
            b[i] = temp;
        }
        temp = floor(temp/8);    
    }
    for(int i=::i;i>=0;--i)
    {
        cout << b[i];
    }
}
