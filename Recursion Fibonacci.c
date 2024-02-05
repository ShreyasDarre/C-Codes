#include<stdio.h>

int fib(int x);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
}

int fib(int x)
{
    if(x==1 || x==2)
    {
        return 1;
    }
    else
    {
        return fib(x-1) + fib(x-2);
    }
}
