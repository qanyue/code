#include <iostream>
using namespace std;
 long long read();
template<typename T> void print(T n);
int main()
{
    long long fee = 0;
    long long m = 0 ;
    int cnt = 0;
    while (true)
    {
        fee = read(); 
         m = read();
        long long mul = fee - (fee%5);
        long long j=1;
        for (long long i = mul*j; i <= 1.12*fee; j++)
        {
                if (0.9 * i <= fee && fee <= 0.95 * i && i<=m)
                {
                    cnt++;
                }
                i = mul+5*j;
        }
        print(cnt);
        cnt = 0;
    }
    return 0;
}
 long long read()
{
    int f = 1;
    long long  x = 0;
    char s = getchar();
    while (s < '0' || s > '9')
    {
        s = getchar();
    }
    while (s >= '0' && s <= '9')
    {
        x = (x << 3) + (x << 1) + (s&15);
        s = getchar();
    }
    x *= f;
    return x;
}
template<typename T> void print(T n) 
{ 
    bool neg = 0; 
  
    if (n < 0) 
        n *= -1, neg = 1; 
  
    char snum[65]; 
    int i = 0; 
    do
    { 
        snum[i++] = n % 10 + '0'; 
        n /= 10; 
    } 
  
    while (n); 
    --i; 
  
    if (neg) 
        putchar('-'); 
  
    while (i >= 0) 
        putchar(snum[i--]); 
  
    putchar('\n'); 
} 