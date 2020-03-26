#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
	array <double, 10> donations {};
	double sum {};
	int popularity{10}, count ;

	for (int i = 0; i < popularity; ++i)
	{
		cin >> donations[i];

		if(!cin.good())
		{
			break;
		}

		sum += donations[i];
		++count;

	}
	
	double average = sum / count;

	cout << "The average is " << average <<endl;

	int count2;
	for (int i = 0; i < count; ++i)
	{
		if(donations[i] > average)
		++count2;
	}

	cout << "The people exceed average is " << count2 << endl;









	return 0;
}