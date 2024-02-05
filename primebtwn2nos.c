/*
void main()
{
    int a,b,i,x;
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);

    for(x=a+1;x<=b-1;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
                break;
        }
        if(i==x)
            printf("%d is a prime number\n",x);
        else
            printf("%d is not a prime number\n",x);
    }
}
*/

int main()
{
    int num1,num2,a,b;
    printf("Enter 2 no's\n");
    scanf("%d%d",&num1,&num2);

    for(a = num1+1;a<num2;a++)
    {
        for(b=2;b<a;b++)
        {
            if(a%b==0)
            {
                break;
            }
        }
        if(a==b)
            printf("%d is a prime number\n",a);
    else
        printf("%d is not a prime number\n",a);
    }

}
