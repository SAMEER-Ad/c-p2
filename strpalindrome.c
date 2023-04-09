# include <stdio.h>
# include <string.h>

int main(){
char a[100],b[100];
int d=0;

printf("enter a string to check wether it is palindrome or not:");
gets(a);
strcpy(b,a);
strrev(b);
d=strcmp(a,b);

if (d==0)
{
    printf("%s is palindrome",a);
}
else{
    printf("%s is not palindrome",a);
}

return 0;
}