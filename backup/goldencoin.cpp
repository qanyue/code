#include<bits\stdc++.h>
using namespace std;
template  <typename t>
bool isInt(t x){
    if(x == int(x)){
        return true;
    }else{
        return false;
    }
}
int main(){
    int coin=0;
    while(true){
        int i;
        double coin2 = coin;
        for ( i = 0; i < 5; i++){
            coin2 = (coin2-1)*0.8;
            if(!isInt(coin2) || coin2 <=0){
                break;
            }
        }
            if(i==5){
                printf("%d",coin);
                break;
            }
        coin ++;
    }
    return 0;
}
