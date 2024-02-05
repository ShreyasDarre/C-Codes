#include<stdio.h>

int main()
{
    int num,dup,rem=0,sum=0;
    printf("Enter num");
    scanf("%d",&num);
    dup = num;
    for(int i=1;i<num;i++)
    {
        if(dup%i==0)
        {
            sum = sum +i;
        }
    }
    if(sum == num)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not Perfect number\n");
    }
    return 0;
}
