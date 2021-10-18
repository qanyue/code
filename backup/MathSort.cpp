#include<iostream>
using namespace std;
class Number
{
public :
    static const  int len = 10;
    int arr [10] {};
    Number() = default;
    void getNumber()
    {
        for (int i = 0; i < len; ++i)
        {
            cin >>Number::arr[i];

        }
    }
    void quickChange(int* arr, int len)
    {
        int min {arr[0]},max{arr[0]};

        int count1{}, count2{};
        for (int i = 0; i < len; ++i)
        {
            if(arr[i] > max)
            {
                max = arr[i];
                count1 = i;
            }
            if(arr[i] < min)
            {
                min = arr[i];
                count2 = i;
            }

        }
        int tmp = arr[0];
        arr[0] = min;
        arr[count2] = tmp;

        tmp = arr[len-1];
        arr[len-1] = max;
        arr[count1] = tmp;
    }
    void  print()
    {

        for (int i = 0; i < len; ++i)
        {
            cout <<Number::arr[i] <<" ";

        }

    }

};
int main()
{
    Number n1{};
    n1.getNumber();
    n1.quickChange(n1.arr,n1.len);
    n1.print();

    return 0;
}
