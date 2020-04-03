//需要输入以eof结束时（eof就是=-1）
#include<stdio.h>
#include<stdlib.h>         
int main()
{
    
    int a=0,b=0;
    while (scanf("%d",&a)!=-1)
    {
        scanf("%d",&b);
        printf("%d\n",a+b);
    }

           
    system("pause");
    return 0;
}