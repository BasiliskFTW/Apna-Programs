#include <stdio.h>

int main(){
    int key, t1 = 0, t2 = 1, term = 0;
    printf("Enter the key to search for in the Fibonacci pattern: ");
    scanf("%d", &key);
    if(key < 0){
        printf("%d is not present in the Fibonacci series.\n", key);
        return 0;
    }
    while(term < key){
        term = t1 + t2;
        t1 = t2;
        t2 = term;
    }
    if(term == key) printf("%d is found in the Fibonacci series.\n", key);
    else printf("%d is not in the Fibonacci series.\n", key);
return 0;
}