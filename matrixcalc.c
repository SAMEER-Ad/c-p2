#include <stdio.h>

int main()
{
    int a[2][2];
    int b[2][2];
    int c;
    int add[2][2];
    int sub[2][2];
    int mul[2][2];
    int i = 0, j = 0, k = 0;

    printf("Enter the elements of matrix1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of matrix2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Enter your choice:\n");
    printf("1 = Addition\n");
    printf("2 = Subtraction\n");
    printf("3 = Multiplication\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1://addition

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                add[i][j] = a[i][j] + b[i][j];
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ", add[i][j]);
            }
           printf("\n");
        }
         break;

    case 2://subtraction
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                sub[i][j] = a[i][j] - b[i][j];
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d  ", sub[i][j]);
            }
            printf("\n");
        }
        break;

    case 3://multiplication
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d  ", mul[i][j]);
            }
            printf("\n");
        }
        break;
    }

    return 0;
}