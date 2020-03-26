#include <iostream>
using namespace std;
class  a
{
public:
    int z=0;
    a ()
    {
        cout << "i'm coming" << endl;
    }
    a (int new1)
    {
        z = new1;
        cout << "Let's go " << endl;
    }

    void hello (int b = 0)
    {
        cout << "this is b:" << b << endl;
    }

    

};
int main(int argc, char const *argv[])
{
    a A{1};
    cout << A.z << endl;
    A.hello() ;

    return 0;
}