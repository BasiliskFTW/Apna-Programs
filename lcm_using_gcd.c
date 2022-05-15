#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int gcd(int num1, int num2){
    if(num1 < num2) swap(&num1, &num2);

    while(num2 % num1 != 0){
        int rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    return num1;
}

int main(){
    int num1, num2;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("LCM of %d and %d is %d.\n", num1, num2, num1 * num2 / gcd(num1, num2));
}