# include <stdio.h>

int main(){
int a=0,b=1,c=0,i=0,n;
printf("enter number of terms in fibonacci series:");
scanf("%d",&n);

do
{
  printf("%d,",a);
  c=a+b;
  a=b;
  b=c;
  i++;
} while (i < n);

return 0;
}