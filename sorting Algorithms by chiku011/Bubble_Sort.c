#include <stdio.h>

// Bubble Sort Function
void mergeSort(int arr[], int n)
{
    int swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = 0; // No swaps at the beginning

        // Let's check each pair of adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            // If the current element is bigger than the next one, swap them
            if (arr[j] > arr[j + 1])
            {
                // Swap them!
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Indicate that we made a swap
            }
        }

        // If we didn't swap anything in this pass, it means the array is sorted
        if (swapped == 0)
        {
            break;
        }
    }
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

    // Call the Bubble Sort function
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
