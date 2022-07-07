#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    int sum = 0;
    printf("Enter the values ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum is :%d", sum);
    return 0;
}