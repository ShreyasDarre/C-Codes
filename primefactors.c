
int main()
{
    int n,x,i;
    printf("Enter number: ");
    scanf("%d",&n);
    x=n;

    for(i=2;i<=x;i++)
    {
        while(x%i==0)
        {
            printf("%d ",i);
            x=x/i;
        }
    }
}
/*
int main()
{
    int num,temp,i;
    printf("Enter num\n");
    scanf("%d",&num);
    temp = num;

    for(i = 2;i<temp;i++)
    {
        while(temp%i==0)
        {
            printf("%d\t",i);
            temp = temp/i;
        }
    }
}
*/
