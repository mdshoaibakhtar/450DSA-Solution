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

void reversearray(int arr[], int low, int high)
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
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reversearray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}
