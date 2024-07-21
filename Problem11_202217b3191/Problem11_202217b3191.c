//11. IMPLEMENTATION OF LINEAR SEARCH

#include<stdio.h>

int linearSearch(int arr[], int n, int target)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == target)
        {
            return i;//index number at which the elelement found
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 2, 8, 5, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int result = linearSearch(arr, n, target);

    if(result == -1)
    {
        printf("\n The Element you're searching for is not found");
    }
    else
    {
        printf("\n The Element is found and is present at index %d\n", result);
    }

    return 0;
}
