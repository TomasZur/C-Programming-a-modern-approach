#include <stdio.h>

void sort(int a[], int n);

int main()
{

    int n, i;

    printf("Enter how many numbers you want to sort: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers to sort: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("The array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void sort(int a[], int n)
{
    if (n <= 1)
    {
        return;
    }

    int i;
    int max_index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[max_index] < a[i])
        {
            max_index = i;
        }
    }

    if (max_index != n - 1)
    {
        int temp = a[max_index];
        a[max_index] = a[n - 1];
        a[n - 1] = temp;
    }

    sort(a, n - 1);

    return;
}