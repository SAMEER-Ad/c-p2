# include <stdio.h>

int main(){
    int a,b,c=0,d=0;
printf("enter a number:");
scanf("%d",&a);
d=a;
while (a!=0)
{
    a=a/10;
    c++;
}

printf("there are %d digits in %d",c,d);

return 0;
}