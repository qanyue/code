#include<iostream>
using namespace std;
int main(){
    int a[8] = {24,1007,956,705,574,371,416,35};
    int b[8] = {60,631,772,201,262,763,1000,77};
    int c[8]={0};
    for(int i =0; i < 8;i++){
        int m = a[i], n=b[i], p;
         p = m % n;
        while(p>0){
            m = n;
            n = p;
            p = m % n;
        }
        c[i] = n;
    }


    for(int i : c){
        cout << i << " ";
    }
    
    return 0;

}
