#include<stdio.h>
#include<math.h>
#include<cstring>
int main()
{
	long int s,h,t=0;
    int i=0;
	printf("please a number: ");
		scanf("%ld",&s);
		while (s>0)
		{
			if (0==s%2)
			{	
				h=s%10;
				t=t+h*pow(10,i);
				i++;
			}
			s=s/10;
		}
		printf("%ld",t);
		return 0;
}
