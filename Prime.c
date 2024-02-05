/*
void main()
{
    int x,i;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
            break;
    }

    if(i==x)
        printf("%d is a Prime number",x);
    else
        printf("%d is not a Prime number",x);
}
*/
int main()
{
    int num,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
            break;
    }
    if(i==num)
    {
        printf("%d is a prime number",num);
    }
    else
        printf("%d is not a prime number",num);
}
