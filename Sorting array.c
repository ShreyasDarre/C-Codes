#include <stdio.h>
#include<stdbool.h>
/*
int main() {
    int arr[10] = {10, 20, 50, 40, 80};
    int rounds, t, i;

    for (rounds = 1; rounds < sizeof(arr) / sizeof(arr[0]); rounds++) {
        for (i = 0; i < sizeof(arr) / sizeof(arr[0]) - rounds; i++) {
            if (arr[i] < arr[i + 1]) {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

int main()
{
    int arr[5]={20,30,18,22,16};
    int i,j,temp;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        for(j=0;j<sizeof(arr)/sizeof(arr[0])-i;j++)
        {
            if(arr[j]<arr[j+1])
                {
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
    for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }
}
*/

// GFG

void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++)
    {
        swapped = false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
    if(swapped == false)
    {
        break;
    }
    }
}

void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={64,13,14,25,11,90,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printf("Bubble sorted: \n");
    printArray(arr,n);
    return 0;
}


