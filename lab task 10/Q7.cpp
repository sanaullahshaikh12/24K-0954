#include <stdio.h>
void bubbleSort(int arr[], int n) 
{
    if (n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) 
	{
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, n - 1);
}
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);
    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

