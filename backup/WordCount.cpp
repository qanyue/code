#include<iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int count{};
	char word[80];

	cin >> word;
	while(strcmp(word,"done")!=0)
	{
		++count;
		cin >> word;
	}

	cout << "You enterd a total of " << count << " word." << endl;

	return 0;
}