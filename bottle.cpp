#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int bottle{};
    cin >> bottle;
    while (bottle != 0) {
        int all{};
        while (bottle > 2) {
            all += bottle / 3;
            bottle = bottle % 3 + bottle / 3;
        }
        if (bottle == 2) {
            ++all;
        }
        cout << all << '\n';
        cin >> bottle;
    }
    return 0;
}
