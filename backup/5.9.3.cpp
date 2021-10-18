#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	cout << "Please enter the number, end by '0' : " << endl;
	int  number{};
	int sum{};

	cin >> number;

	while(number != 0)
	{
		sum = sum + number;
		cout << sum << endl;
		cin >> number;

	}




	return 0;
}