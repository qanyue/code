#include<iostream>
using namespace std;
int main()
{
    int a{10};
    const int b = a;
    cout << &b<< endl;
    return 0;
}
