#include<iostream>
#include<cstring>
using namespace std;
char * getchars();
int main(int argc, char const *argv[])
{
	char * ps= getchars();

	cout << ps <<endl;


	return 0;
}
char * getchars()
{
	cout << "Please enter some string : ";
	char temp [80] ={"\0"};
	cin >> temp;
	char *ret = new char[strlen(temp)+1];
	strcpy(ret,temp);
	return ret;



}
