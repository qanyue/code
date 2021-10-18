#include<iostream>
#include<string>
using namespace std;
double recube(const double & ra);
int main(int argc, char const *argv[])
{
	
	float side = 3.0;
	//double * pd = &side;
	//double & rd = side;
             
	
	cout << recube(side) << endl;
	cout.setf(ios_base:: showpoint);
	cout.precision(4);
	cout << side << endl;



	return 0;
}

double recube(const double &ra)
{
	return (ra * ra * ra);
}