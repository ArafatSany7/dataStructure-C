#include <stdio.h>
int main()
{
    int arr[10], temp, n;

    printf("Enter the length of array : ");
    scanf("%d", &n);

    printf("Enter integer for sorting: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}