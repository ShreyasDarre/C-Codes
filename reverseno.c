/*
void main()
{
    int x,y=0,z;
    printf("Enter the number x: ");
    scanf("%d",&x);
    while(x!=0)
    {
        z=x%10;
        y=y*10+z;
        x=x/10;
    }
    printf("Reverse is: %d",y);
}
*/
int main()
{
    int num,tem=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    tem=num;
    int rev,quo;
    while(tem)
    {
        quo=tem%10;
        rev = rev*10 + quo;
        tem = tem/10;
    }
    printf("Reverse of %d is %d",num,rev);
}
