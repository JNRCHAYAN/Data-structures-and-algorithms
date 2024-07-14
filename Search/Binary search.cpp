#include <stdio.h>
int main()
{
    int i, l, u, middle, n, search, array[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i= 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter value to find\n");
    scanf("%d", &search);
    l = 0;
    u = n - 1;
    middle = (l+u)/2;
 while (l <= u)
    {

if (array[middle] < search)
            l = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at index %d.\n", search, middle);
            break;
        }
        else
            u = middle - 1;
        middle = (l + u)/2;
    }
    if (l > u)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}

