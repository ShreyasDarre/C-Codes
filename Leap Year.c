#include<stdio.h>
/*
Year should be exactly divisible by 400
or the year should be divisible by 4
if the year is divisible by 100 and not divisible by 400 then it is not a leap year
Same for divisible by 100 and not divisible by 4
*/
int main()
{
    int year;
    scanf("%d",&year);

    if(year%400 == 0)
    {
        printf("It's a leap year\n");
    }
    else if(year%100 == 0)
    {
        printf("It's not a leap year\n");
    }
    else if(year%4 ==0)
    {
        printf("It's a leap year\n");
    }
    else
    {
        printf("It's not a leap year\n");
    }
    return 0;
}
