#include <iostream>
using namespace std;


class circle 
{
	public :

	double radius {1};


	circle ()
	{
		radius=1.0;
		cout << radius << endl;
	}

	circle(double newRadius)
	{	cout <<" I am coming"<< radius<<"##"<< newRadius<<endl;
		radius = newRadius;
		cout <<" I am coming"<< radius<<"##"<< newRadius<<endl;
	}

	double getArea()
	{
		return radius * radius * 3.14159;
	}

};

int main(int argc, char const *argv[])
{
	circle circle2{5.0};
	


	cout << "The area of the radius " <<
	circle2.radius<< " is "<< circle2.getArea() <<endl;


	return 0;
}