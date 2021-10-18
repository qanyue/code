#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int sec{};
    cin >> sec;

    clock_t delay = sec * CLOCKS_PER_SEC;
    
    clock_t start = clock();
    while(clock() - start < delay)
        ;
    cout << "hello" << endl;
    
    return 0;
}
