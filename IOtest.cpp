#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a;
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		int m{}, sum{};
		cin >> m;
		for (int i = 0; i < m; ++i)
		{
			int z;
			cin >> z;
			sum = sum + z;

		}
		if(i==a-1)
		{
			cout << sum <<endl;
			break;
		}
		cout << sum << endl <<endl;
	}
	
	return 0;
}