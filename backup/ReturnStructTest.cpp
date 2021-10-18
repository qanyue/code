#include <iostream>
using namespace std;
struct car
{
	int year;
	double price;
};

  car change(car z);

int main(int argc, char const *argv[])
{
	car z {1986, 1000.0};

	z = change(z);

	cout.setf(ios_base::showpoint);
	cout << z.price <<endl;

	return 0;
}
car change (car z)
{

	z.price = 386.0;

    return z;

}
