#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	const int change{220};
	double distance1{};
	double distance2{};

	cout << "please enter the disrance: ";
	cin >> distance1;
	distance2=distance1*change;
	cout << "After change the disrance is " << distance2 << endl;

	return 0;
}