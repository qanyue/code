#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a[10] = {10, 20, 12, 131, 312, 1564, 210, -2, 3, -5};
    int max{}, tmp2{};
    clock_t start,stop;
    start = clock();
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            tmp2 = tmp2 + a[j];
            if (tmp2 > max)
            {
                 max = tmp2;
            }
        }
        tmp2 = 0;
    }

    stop = clock();
    cout << max << " " << (stop-start)/CLOCKS_PER_SEC;
    return 0;
}
