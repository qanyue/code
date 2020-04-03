//警示：number每一次用完后都要清0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int count = 0;

    char p[12] = "0";
    
    while (scanf("%s", &p) != -1)
    {
        char number1[4]="0", number2[4]="0", res[4]="0";
        int i = 0;
        for (i = 0;; i++)
        {
            if (p[i] == '-' || p[i] == '+')
            {
                break;
            }
        }
        int j = 0;
        int len = strlen(p);
        for (j = 0;; j++)
        {

            if (p[j] == '=')
            {
                break;
            }
        }


        if (p[j+1] == '?')
        {
            continue;
        }


        for (int q = 0; q < i; q++)
        {
            number1[q] = p[q];
        }
        for (int q = i + 1, m = 0; q < j; q++, m++)
        {
            number2[m] = p[q];
        }
        for (int q = j + 1, m = 0; q < len; m++, q++)
        {

            res[m] = p[q];
        }

        int temp1 = atoi(number1), temp2 = atoi(number2), temp3 = atoi(res);

        if (p[i] == '-')
        {
            if (temp1 - temp2 == temp3)
            {
                count++;
            }
        }

        if (p[i] == '+')
        {
            if (temp1 + temp2 == temp3)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    system("pause");
    return 0;
}