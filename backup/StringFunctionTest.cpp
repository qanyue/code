#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a{"Welcome to c++ "};
    a.replace(begin(a),begin(a)+3,"b");
    cout << a << endl;





    return 0;
}

