#include<iostream>
using namespace std;
class u{
public:
    int a;
    u(){
        a = 10;
    }
    u(int _a)
    {
        a = _a;
    }

};
int main()
{
    cout << u{10}.a << endl;
}
