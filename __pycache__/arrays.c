#include <stdio.h>
int main()
{
    int num[3] = {5, 4, 2};
    int sum = num[0] + num[1] + num[2];
    int subs = num[0] - (num[1] + num[2]);
    int multiplication = num[2] * num[2] * num[0];
    int division = num[1] / num[2];
    printf("The sum is :%d\n", sum);
    printf("The difference is :%d\n", subs);
    printf("The multiplication is :%d\n", multiplication);
    printf("The division is :%d\n", division);
    return 0;
}