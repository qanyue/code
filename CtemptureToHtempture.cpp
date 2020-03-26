#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x{};
    cin >> x;
    
     double tmp{};
    tmp = 5*(x-32)/9;
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout << tmp;
    return 0;


}
