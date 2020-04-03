//setjump 的使用与函数互相调用
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

static jmp_buf buf1;

void up(int i, int j, char **p);
void down(int i, int j, char **p);
void right(int i, int j, char **p);
void left(int i, int j, char **p);
int n = 0, m = 0;
int main()
{
    int change = 0;
    int *pc = &change;

    int i;
    
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();

    char **p = (char **)malloc(sizeof(char *) * n);

    for (i = 0; i < n; i++)
    {
        p[i] = (char *)malloc(sizeof(char) * m);
    }

    for (i = 0; i < n; i++)
    {
        gets(p[i]);
    }

    int j = 0, q = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (p[i][j] == 'K')
            {
                q = -1;
                break;
            }
        }
        if (q == -1)
        {
            break;
        }
    }

     if (setjmp(buf1))
    {
        printf("Dangerous");
        exit(0);
    } 
   

    up(i, j, p);
    down(i, j, p);
    right(i, j, p);
    left(i, j, p);

    printf("Safe\n");
  
    system("pause");
    return 0;
}

void up(int i, int j, char **p)
{
    for (; i >= 0; i--)//i=-1 exit
    {
        if(p[i][j]=='U')
        {
            longjmp(buf1,1);
        }
        if((i-1)>=0&&p[i-1][j]=='X')
        {
            down(i, j, p);
            right(i, j, p);
            left(i, j, p);
            exit(0);
        }
    }
}
void down(int i, int j, char **p)
{
    for (; i < n; i++)//i=m exit
    {
        if(p[i][j]=='U')
        {
            longjmp(buf1,1);
        }
        if((i+1)<n&&p[i+1][j]=='X')
        {
            up(i, j, p);
            right(i, j, p);
            left(i, j, p);
            exit(0);
        }
    }
}
void right(int i,int j,char **p)
{
    for (;j<m;j++)
    {
        if(p[i][j]=='U')
        {
            longjmp(buf1,1);
        }
       if((j+1)<m&&p[i][j+1]=='X')
        {
            up(i, j, p);
            right(i, j, p);
            left(i, j, p);
            exit(0);
        }
    }
}
void left(int i,int j,char **p)
{
    for (;j>=0;j--)
    {
        if(p[i][j]=='U')
        {
            longjmp(buf1,1);
        }
       if((j-1)>=0&&p[i][j-1]=='X')
        {
            up(i, j, p);
            right(i, j, p);
            left(i, j, p);
            exit(0);
        }
    }
}