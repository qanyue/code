#include <iostream>
using namespace std;

void area(int radius = 1);

int main(int argc, char const *argv[])
{
	area();
	area(4);
	return 0;
}


void area (int radius  )
{
	cout << radius << endl;
}