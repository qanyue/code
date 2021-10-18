#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef unsigned long long ull;
ull min(ull a,ull b)
{
	if(a<b) return a;
	else return b;
}
int main()
{
	//freopen("input.txt","r",stdin);
	ull a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		double temp=a/19.0;
		//cout<<temp<<endl;
		ull e=a/9;
		//if(s==0) s++;
		ull s=ceil(temp);
		int counter=0;
		e=min(e,b-a);
		for(int i=s;i<=e;i++)
		{
			if((i+a)%5==0) counter++;
		}
		printf("%d\n",counter);
	}
 } 