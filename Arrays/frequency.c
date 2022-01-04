#include <stdio.h>

int main()
{
    int arr1[100], fr1[100];
    int n, i, j, count;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        fr1[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                count++;
                fr1[j] = 0;
            }
        }

        if (fr1[i] != 0)
        {
            fr1[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for (i = 0; i < n; i++)
    {
        if (fr1[i] != 0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}