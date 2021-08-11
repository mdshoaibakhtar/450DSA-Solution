#include<stdio.h>

void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void min_max_array(int arr[],int n)
{
    int min=arr[0];
    for (int i = 1; i < n; i++)
    {
        //{2,5,78,1,24,454,21}
        if (arr[i]<min)
        {
            arr[i] = min;
        } 
    }
    printf("%d is the smallest \n",min);
    
    
}
int main()
{
    int arr[]={2,5,78,1,24,454,21};
    int n= sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
    min_max_array(arr,n);
}