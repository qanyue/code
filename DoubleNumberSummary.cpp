#include<iostream>
using namespace std;
int main()
{
    int n{};
    static int sum{};
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int m{};
        cin >> m;
        if(!(m&1))
        {
            sum += m;
        }
        else
        {
            continue;
        }
        
    }
    cout << sum;
}
