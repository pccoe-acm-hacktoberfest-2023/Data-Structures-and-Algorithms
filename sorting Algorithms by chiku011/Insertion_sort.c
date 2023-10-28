#include <stdio.h>

// Insertion Sort Function
void mergeSort(int arr[], int n)
{
    // Write your code here
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Call the Insertion Sort function
    mergeSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
Output:

Original array: 64 34 25 12 22 11 90
Sorted array: 11 12 22 25 34 64 90
*/
