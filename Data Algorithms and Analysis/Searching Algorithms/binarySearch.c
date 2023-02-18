#include <stdio.h>

int binarySearch(int arr[], int l, int n, int x)
{
    while (l <= n)
    {
        int mid = l + (n - 1) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            n = mid - 1;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element found at index %d", binarySearch(arr, 0, n - 1, 5));
}