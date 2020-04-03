#include<iostream>
using namespace std;
void quickSort(int, int, int*);
int main()
{
    int p[10]{5,1,2,646,23,896,86,68,66,666};

        quickSort(0,9,p);
    for (int i = 0; i < 10; ++i)
        {
            cout << p[i] << " ";
        }

    return 0;
}
void quickSort(int left, int right, int *arr)
{
            if(left >= right)
                return;//没有这个条件这个函数将会不断调用

    int i{left}, j{right}, base{arr[left]};

    while (i < j)
        {
            while (i < j &&  arr[j] >= base)
            {
                --j;
            }
            while(i < j && arr[i] <= base)
            {
                ++i;
            }
            if(i < j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        arr[left] = arr[i];
        arr[i] = base;

        quickSort(i+1, right, arr);
        quickSort(left, j-1, arr);
}
