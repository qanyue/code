//规律：位置[i][j]旋转90度后的新位置是[j][n-1-i]

#include <iostream>
using namespace std;
int main()
{
    const int M {3};
    int matrix[M][M] {1,2,3,
                 4,5,6,
                 7,8,9};

    int n = M;
   for(int i = 0; i < n / 2; ++i)
        {
            for(int j = i; j < n - 1 - i; ++j)
            {
                /* 因为顺时针旋转，所以该值时要逆时针改 */
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = tmp;
            }
        }
    for (int i = 0; i < M; ++i)
        {
            for (int j = 0; j < M; ++j)
                {
                    cout << matrix[i][j] << " ";
                }
            cout << endl;

        }

  return 0;
}
