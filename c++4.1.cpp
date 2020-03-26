#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int yams[3];
	yams[0] = 3;
	yams[1] = 8;
	yams[2] = 6;
	
	int yamcosts[3] = {20, 30, 5};

	cout << "Tptal yams =";
	cout << yams[0] + yams[1] + yams[2] << endl;
	return 0;
}
