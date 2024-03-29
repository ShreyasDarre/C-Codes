/**
 * C program to check whether a number is even or odd using bitwise operator
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    (num & 1)
        ? printf("%d is odd.", num)
        : printf("%d is even.", num);

    return 0;
}
