#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char a[3][20]{"0"};
	int i {};
	while(cin.get(a[i],19)&&cin.get()=='\n')
	{
		i++;
		if(i==3)
		{
			break;
		}
	}


	for (int i = 0; i < 3; ++i)
	{
		cout << a[i]<<endl;
	}


	

	return 0;
}