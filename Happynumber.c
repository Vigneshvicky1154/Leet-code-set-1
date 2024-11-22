#include <stdio.h>

int happynum(int n) 
{
    int sum = 0;
    while (n != 0) 
    {
        int digit=n%10;
        sum=sum+(digit*digit);
        n/=10;
    }
    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);
    int temp=num;
    while (temp!=1 && temp!=4)
    {
        temp = happynum(temp);
    }
    if (temp == 1) 
    {
        printf("%d is a happy number.\n", num);
    } else {
        printf("%d is not a happy number.\n", num);
    }
    return 0;
}
