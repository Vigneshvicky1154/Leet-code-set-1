#include<stdio.h>
int titleToNumber(char* columnTitle) 
{
int op,s=0;
while(*columnTitle!='\0')
{
    op=(*columnTitle-'A'+1);
    s=s*26+op;
    columnTitle++;
}
return s;
}
int main()
{
    char columnTitle[100];
    scanf("%s",columnTitle);
    int result = titleToNumber(columnTitle);
    printf("Result: %d\n", result);
    return 0;
}
