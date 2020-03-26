#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
using namespace std;
bool isGreater(int a, int b) {
    bool ret = false;
    if (a < b) {
        ret = true;
    }
    return ret;
}
int main(int argc, char const *argv[]) {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    array a {1, 10, 103, 23, 2, 3, 4, 5};
    sort(begin(a), end(a), isGreater);
    cout << a[0] << endl;
    cout << a.at(1) << endl;
    
   	cout << a.front() << endl;
    assert(!( a.front() == 1));
   
    return 0;
}
