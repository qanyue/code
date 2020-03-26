#include <iostream>
using namespace std;
int main() {
    double a{2.0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    //printf("%.8f\n",a);  使用sync后cin/cout 和 printf /scanf不能混用

    cout.setf(ios_base::floatfield);
    cout << a << endl;
    cout.setf(ios_base::showpoint);
    cout << a << endl;
    cout.setf(ios_base::fixed);
    cout.precision(8);
    cout << a << endl;

    return 0;
}
