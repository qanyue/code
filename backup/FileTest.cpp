#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
ifstream  f1;
	f1.open("a.txt");
    char a[80] {"hello world"};
    f1.getline(a,80);
	cout << a;
	return 0;
}
