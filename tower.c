#include <stdio.h>

int main()
{
    int a, b, c, highest;
    float average;

    printf("Enter three heights  : ");

    scanf("%d %d %d", &a, &b, &c);

    highest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    average = (a + b + c) / 3;
    printf("\nThe biggest number is : %d\n", highest);
    printf("The Average Height is : %.2f\n", average);

    return 0;
}
