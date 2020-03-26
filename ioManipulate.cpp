#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double b = 0.0003;
    cout << left;
    cout <<setw(8) << b << "\n";
    cout << fixed;
    cout << setprecision(8); 
    cout << b << '\n';
    return 0;
}
