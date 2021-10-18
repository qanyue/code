#include <array>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int max_len = 100;
    array<int, max_len> a{};
    array<int, max_len> b{};
    string num1{}, num2{};
    cin >> num1 >> num2;

    int len1 = num1.length(), len2 = num2.length();
    for (int i = len1 - 1, j = 0; i >= 0; --i) a[j++] = num1.at(i) - '0';
    //注意 i=len-1;不要设置成=len
    for (int i = len2 - 1, j = 0; i >= 0; --i) b[j++] = num2.at(i) - '0';
    int big = len1 > len2 ? len1 : len2;
    for (int i = 0; i < big + 1; ++i) {
        a[i] += b[i];
        if (a[i] > 9) {
            a[i] -= 10;
            ++a[i + 1];
        }
    }

    cout << "\n";
    bool flags = true;
    for (int i = big; i >= 0; --i)  //不要设置成big+1
    {
        if ((!a[big]) && flags)  //必须设置flags不然会一直卡在这里
        {
            flags = false;
            continue;
        }
        cout << a[i];
    }

    return 0;
}
