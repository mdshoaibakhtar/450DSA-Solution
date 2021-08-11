//Reverse The Array
#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// iterative method to reverse an array
void reverseArray(int arr[], int low, int high)
{
    int temp;
    while (low < high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
     printf("\n");
}

//Recursive method To reverse an array
void rec_reverseArray(int arr[], int low, int high)
{
    int temp;
    if (low <= high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        rec_reverseArray(arr,low+1,high-1);
    }
     printf("\n");
}
int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter The Size Of The Array\n");
    scanf("%d", &n);
    printf("Enter Element From Here\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n);
    // reverseArray(arr, 0, n - 1);
    rec_reverseArray(arr,0,n-1);
    printArray(arr, n);
    return 0;
}
