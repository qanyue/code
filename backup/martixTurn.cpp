#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<array<int,3>,3> matrix;
    for(int i =0;i<3;++i)
    {
       scanf("%d %d %d",&matrix[i][0],&matrix[i][1],&matrix[i][2]);
    }
    for(int i =0;i<3;++i)
    {
        for(int j = 0;j<3;++j)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
