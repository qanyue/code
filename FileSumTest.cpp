#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
	int sum = 0;
	int number = 0;
	int count = 0;

	ifstream calculate;
	calculate.open("number.txt");

	calculate >> number;
	++ count;
	while(!calculate.is_open())
	{
		cout << "I'm coming";
	}

	if(calculate.eof())
	{
		cout << " end of text\n " ;
	}
	else if(calculate.fail())
	{
		cout << "mismatch data\n";
	}
	else 
	{
		cout << "Unknown error\n";
	}

	cout << "sum = " << sum;



	return 0;
}