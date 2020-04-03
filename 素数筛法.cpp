#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool status = true;
    int x{};
    cin >> x;
    const int  len = {static_cast<int>(x/log(x)) + 2};
    int counter {1};
    int p [len] = {2};
    for (int i = 3; i <=x; ++i)
        {
            for(int j : p)
            {
                if(j != 0 && i % j == 0)
                {
                    status = false;
                    break;
                }
                status = true;
            }

            if(status)
            {
                p[counter] = i;
                ++counter;
            }

        }
    for (int i = 0; i < counter; ++i)
        {
            cout << p[i] << endl;
        }


    return 0;
}
