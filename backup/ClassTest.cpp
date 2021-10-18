#include <iostream>
using namespace std;
class Circle {
   public:
    double radious;
    Circle() { radious = 1.0; }
    Circle(double radious) { this->radious = radious; }
    double getArea() { return (3.14 * radious * radious); };
};
class X {
   private:
    double state;

   public:
    Circle c1;
    X() : c1{2.0} { state = 1.0; };
};
void
int main() {
    X x1;
    cout << x1.c1.getArea() << endl;
    return 0;
}
