# include <stdio.h>
# include <string.h>

int main(){
char a[90],b[90];
printf("enter string ");
gets(a);

strupr(a);
printf("given string in upper case is %s",a);
printf("\n");

strlwr(a);
printf("given string in upper case is %s",a);


return 0;
}