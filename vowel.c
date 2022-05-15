#include <stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    if (!isalpha(ch))
    {
        printf("Entered character is not an alphabet.\n");
        return 0;
    }
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')  {
        printf("\n %c is a VOWEL.", ch);
    }
    else {
        printf("\n %c is a CONSONANT.", ch);
    }
    return 0;
}
