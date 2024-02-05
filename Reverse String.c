#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],rev[100];

    printf("Enter a string\n");
    gets(str);

    int i=0,len;

    len = strlen(str);

    while(str[i])
    {
        if(str[i]==' ')
        {
            index = i+1;
        }
    }
}
