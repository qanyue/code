#include <iostream>
#include <array>
using namespace std;

const int Arsize = 100;
int main(int argc, char const *argv[])
{
	array <long double, Arsize> a {1,1};

	for (int i = 1; i <= Arsize; ++i)
	{
		a[i]=a[i-1] * i;
		if(i==0)
		{
			continue;
		}
		cout.setf(ios::left);
		cout.precision( 600 );

		cout << i << "! = " << a[i] <<endl;
	}


	return 0;
}
