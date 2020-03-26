#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int	incun {};
	int inch {};
	const int change {12};
	cout << "Please enter the height by incun :";
	cin >> incun;
	inch = incun / 12;
	cout <<"After change height is " <<inch <<" inch "<<
	incun%change << " incun\n"; 


	return 0;
}