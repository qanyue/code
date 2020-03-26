#include <iostream>
#include <string>
using namespace std;
struct car
{
	string producter;
	int year;

};

int main(int argc, char const *argv[])
{
	cout << "How many cars do you wish to catalog ? ";
	int count{};
	(cin >> count).get();


	car *pc = new car[count];

	for (int i = 0; i < count; ++i)
	{
		cout << "car #" << i+1 << ":\n" ;
		cout << "please enter the make : ";
		getline(cin,pc[i].producter) ;
		cout << "please enter the year made : ";
		(cin >> pc[i].year).get();
	}

	cout << "Here is your collection :\n";
	for (int i = 0; i < count; ++i)
	{
		cout << pc[i].year << " " << pc[i].producter << endl;
	}





	return 0;
}