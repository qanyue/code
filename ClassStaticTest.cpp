#include<iostream>
using namespace std;
class Square{
  double side{};
public:
  static int numberofObject;
  Square():Square(1.0){};
  Square(double side)
  {
      this -> side = side;
  }

};
int Square::numberofObject{};
int main()
{
    Square s1,s2{1.0};
        cout << s1.numberofObject << endl;
    return 0;
}

