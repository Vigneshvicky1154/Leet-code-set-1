#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int rem,r=0;
 int t=n;
 while (n!=0)
 {
     rem=t%10;
     r=r*10+rem;
     t=t/10;
 }
 printf("%d",r);
if(r==n)
{
    printf("True,it is a Palindromic number");
}
else
{
    printf("False,it is not an palindromic number ");
}
return 0;
}

