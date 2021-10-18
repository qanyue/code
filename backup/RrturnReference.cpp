#include<iostream>
using namespace std;

double & a(double & a);
void  accumulate(double & b);

int main(int argc, char const *argv[])
{
	double test{20.0};
	accumulate(a(test));
	cout << test << endl;
	return 0;
}
double & a(double & a)
{
	a -= 1;
	return  a;
}
void accumulate (double & a)
{
	a *= a;
}
