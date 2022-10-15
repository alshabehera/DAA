#include <iostream>
using namespace std;

void merge(int arr[], int aux[], int l, int m, int h)
{
    int k = l;

    for (int i = l; i <= m; i++)
        if (arr[i] < 0)
            aux[k++] = arr[i];

    for (int j = m + 1; j <= h; j++)
        if (arr[j] < 0)
            aux[k++] = arr[j];

    for (int i = l; i <= m; i++)
        if (arr[i] >= 0)
            aux[k++] = arr[i];

    for (int j = m + 1; j <= h; j++)
        if (arr[j] >= 0)
            aux[k++] = arr[j];

    for (int i = l; i <= h; i++)
        arr[i] = aux[i];
}

void partition(int arr[], int aux[], int low, int high)
{
    if (high <= low)
        return;

    int mid = (low + ((high - low) >> 1));

    partition(arr, aux, low, mid);
    partition(arr, aux, mid + 1, high);

    merge(arr, aux, low, mid, high);
}

int main()
{
    int arr[] = {14,17,-22,-3,4,6,-5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int aux[n];
    for (int i = 0; i < n; i++)
    {
        aux[i] = arr[i];
    }

    partition(arr, aux, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
