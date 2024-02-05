#include<stdio.h>
int fact(int );

int fact(int x)
{
    int fact =1;
    while(x)
    {
        fact = fact*x;
        x--;
    }
    return fact;
}

int main()
{
    int num,dup;
    int sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    dup = num;
    while(dup)
    {
        int temp=0;
        temp = dup%10;
        dup = dup/10;
        sum = sum + fact(temp);
    }
    if(sum == num)
    {
        printf("strong number\n");
    }
    else
    {
        printf("not a strong number\n");
    }
}


