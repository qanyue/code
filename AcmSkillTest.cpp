#include <iostream>
#include <string>
#include <utility>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //交换a,b 不用第三个变量
    int a{10}, b{20};
    a ^= b, b ^= a, a ^= b;
    cout << a << " " << b << endl;
    // swap函数使用（包含在<utility>中

    swap(a, b);
    cout << a << " " << b << endl;

    // 不用%确定奇偶
    
    int z{};
    cin >> z;
    if(z & 1)
    {
        cout << " I'm single\n";
    }else{
        cout << "I'm double\n";
    }
    //找最高位数
    cout << "输入整数来（最高位数）: ";
    int N{};
    cin >> N;
    double  k = log10(N);
            k -= floor(k);
    int x = pow(10,k);
    cout << x << endl;

    //确定是不是2的幂
    int m;
    cout << "输入数字确定位数 : ";
    cin >> m;
    
    if(x && (!(x&(x-1))))
    {
        cout << "yes\n" ;
    }
    else
    {
        cout << " no";
    }

    return 0;
}
