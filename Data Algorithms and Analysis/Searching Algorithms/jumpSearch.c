#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int key)
{
    int start=0;
    int end=sqrt(n);
    
    while(arr[end]<=key && end < n)
    {
        start=end;
        end+=sqrt(n);
        if(end> n-1)
        {
            end=start;
        }
    }
    
    for(int i=0 ;i<end; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
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
    printf("Element found at index %d", jumpSearch(arr, n, 5));
}
