#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int all{};
    string h;
    while (getline(cin, h)) {
        int p = static_cast<int>(h.find_first_of("+-*/"));
        int e = static_cast<int>(h.find_last_of('='));
        if(h[e+1] == '?') continue;
        int a = stoi(h.substr(0, p));
        int b = stoi(h.substr(p + 1, e - p - 1));
        int c = stoi(h.substr(e + 1));
        if (h[p] == '+') {
            if (a + b == c) {
                ++all;
            }
        } else if (h[p] == '-') {
            if (a - b == c) {
                ++all;
            }
        } else if (h[p] == '*') {
            if (a * b == c) {
                ++all;
            }
        } else if (h[p] == '/') {
            if (b == 0) continue;
            if (a / b == c) {
                ++all;
            }
        }
    }
    cout << all << "\n";
    return 0;
}
