#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	cou
	int b = 40;
	int  * const a = &b;

	*a = 10; 

	cout << *a << endl;


	return 0;
}