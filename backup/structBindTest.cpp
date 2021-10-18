#include<iostream>
using namespace std;
int main()
{
    int a [] {10,20,30};
    auto & [a1,a2,a3] {a};
    for(auto i:a)
    {
        cout << i << " ## " ;
    }
    cout << "\n";
    ++a1,++a2,++a3;
    for(auto i:a )
    {
        cout << i << " ## " ;
    }
    cout << " \n";

    return 0;
}
