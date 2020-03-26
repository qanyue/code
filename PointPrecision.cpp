#include <iostream>
using namespace std;
int main() {
    double a{2.0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ios_base::fmtflags initial;
    initial = cout.setf(ios::fixed);
    cout << a << endl;
    cout.setf(ios_base::showpoint);
    cout << a << endl;
    cout.setf(ios_base::fixed);
    cout.precision(8);
    cout << a << endl;
    cout.setf(initial);
    cout << a << endl;

    return 0;
}
