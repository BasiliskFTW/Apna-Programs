#include <stdio.h>
int main()
{
    int arr[10], k, sum = 0;
    printf("Enter the array elements");
    for (k = 0; k < 10; k++)
    {
        scanf("%d\n", arr[k]);
        sum += arr[k];
    }
    printf("The sum is %d", sum);

    return 0;
}
