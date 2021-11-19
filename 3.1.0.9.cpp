#include <iostream>

auto swap(int* a, int* b) -> void
{
    int t = *a;
    *a = *b;
    *b = t;
}

auto partition (int arr[], int low, int high) -> int{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

auto quickSort(int arr[], int low, int high) -> void{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

auto printArray(int arr[], int size) -> void{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

auto main() -> int{
    int arr[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
