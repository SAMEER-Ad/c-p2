#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i = 0, j, k = 0, ch = 0, n = 0, sp = 0, c = 0;
    printf("enter a string:");
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            k++;
        }
        else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            k++;
        }
        else if (a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
        {
            n++;
        }
        else if (a[i] == ' ')
        {
            sp++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("there are %d vovels.\n", k);
    printf("there are %d consonants.\n", c);
    printf("there are %d numberrs.\n", n);
    printf("there are %d white space. \n", sp);

    return 0;
}