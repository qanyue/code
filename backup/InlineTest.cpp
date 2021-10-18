
#include<iostream>
#include <array>
using namespace std;
int main(int argc, char const *argv[])
{	
	
	int n;
	cin >> n;

	auto person = new bool [n] {true};
	for (int i = 0; i < n; ++i)
	{
		person[i] = true;
	}
	int count = n;
	int i = 0;
	for (;count != 1;)
	{
		
		if(person[i])
		 {
		 	if(i == 0)
		 	{
		 		--i;
		 	}
		 	++i;
		 }

		if(i >= n)
		{
			i = 0;
		}
		
		if(person[i] && ((i+1)%3==0))
		{
			person[i] = false;
			--count;
			++i;
		}
	
	}

	cout << i+1 <<endl; 



	return 0;

}