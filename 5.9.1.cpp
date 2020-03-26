#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int min{}, max{};
	int sum {};

	cin >> min >> max ;

	for (int i = min; i <= max; ++i)
	{
		sum = sum + i;

	}
	cout << sum << endl;

	return 0;
}