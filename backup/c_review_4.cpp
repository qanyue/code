#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned) time(NULL));
    int a[10000];
    cout << "please enter n:";
    int n;
    double times1=0,times2=0;
    cin >> n;
    for(int i =0; i<n;i++ ){
        a[i] = 1+rand()%10;
        if(a[i]<=5){
            times1++;
        }else{
            times2++;
        }
    }
    double p1=times1/n *100;
    double p2 =times2/n *100;
    cout.flags(ios_base::fixed);
    cout.precision(2);
    cout << "1-5:" << p1 << "%\n";
    cout << "6-10:" << p2 << "%\n";



}
