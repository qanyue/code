#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long  Apopulation {}, Wpopulation {};
	cout << LLONG_MAX << endl;

	cout << "Enter the world's population : " ;
	cin >> Wpopulation;

	cout << "Enter the population of the us : ";
	cin >> Apopulation;

	cout << "The population of the us is " <<
	static_cast<double>(Apopulation)/Wpopulation *100 <<
	"% of the world population. \n";



	return 0;
}