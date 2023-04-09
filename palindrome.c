# include <stdio.h>

int main(){
    int a,b=0,c=0,n;

printf("enter a number :");
scanf("%d",&a);
n=a;

while (a!=0)
{
    c=a%10;
    b=c+(10*b);
    a=a/10;
}
if (b==n)
{
    printf("%d is a palindrome number",b);
}
else{
     printf("%d is not a palindrome number",b);
}



return 0;
}