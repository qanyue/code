#include<stdio.h>
void fsum(int a[4][4],int i,int j,int b[2]);
int main(){
    int a[4][4] = {{3,6,4,6},{8,3,1,3},{4,7,1,2},{2,9,5,3}};
    int r,c;
    printf("please enter col and row (<4)");
    scanf("%d %d",&r,&c);
    int b[2];
    fsum(a,r,c,b);
    printf("%d %d",b[0],b[1]);
    return 0;
}
void fsum(int a[4][4],int m,int n,int b[2]){
    int sum1=0,sum2=0;
    for(int i=0; i<4;++i){
        sum1 +=a[m][i];
        sum2 +=a[i][n];
    }
    b[0] = sum1;
    b[1] = sum2;
    
}



