#include <stdio.h>

int linearSearch(int arr[], int n, int x)
{
    int flag;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
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
    printf("Element found at index %d", linearSearch(arr, n, 5));
}
