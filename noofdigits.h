#include<stdio.h>

int main()
{
    int n,count1= 0,tem;
    printf("Enter number:\n");
    scanf("%d",&n);
    tem = n;
    while(tem)
    {
        tem = tem/10;
        count1++;
    }
    printf("The no of digits in %d is %d",n,d);
}
