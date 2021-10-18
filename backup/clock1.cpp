#include<bits/stdc++.h>
using namespace std;
int main(){
    clock_t start,stop;
    int x = 1.1;
    ios_base::sync_with_stdio(false);
    start = clock();
    cout << start;
    double r{0};
    double  ai[10] = {23.5,5,6,7,8,5,4,5,65,13};
    double  ai2[10]{0};
    sort(ai,ai2);
    for(auto i : ai2){
        cout << i <<" ";
    }
    cout << "\n" ;
    for (double time = 0; time < 1e9; time++)
    {
    for(int i = 9;i >= 0;i--){
        r = ai[i]+x*r;
    }   
     r=0;
    }
    delete[] ai2;
    stop =clock();
    cout << CLK_TCK <<" "<<stop<<" "<<start << " "<<(double)(stop-start) << '\n';
    cout <<(double)(stop-start)/CLK_TCK/1e9;
    return 0;
}