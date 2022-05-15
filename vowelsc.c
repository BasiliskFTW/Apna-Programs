#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    if (!isalpha(ch))
    {
        printf("Entered character is not an alphabet.\n");
        return 0;
    }
    /* Switch value of ch */
    switch (ch)
    {
    case 'a':
        printf("%c is a Vowel", ch);
        break;
    case 'e':
        printf("%c is a Vowel", ch);
        break;
    case 'i':
        printf("%c is a Vowel", ch);
        break;
    case 'o':
        printf("%c is a Vowel", ch);
        break;
    case 'u':
        printf("%c is a Vowel", ch);
        break;
    case 'A':
        printf("%c is a Vowel", ch);
        break;
    case 'E':
        printf("%c is a Vowel", ch);
        break;
    case 'I':
        printf("%c is a Vowel", ch);
        break;
    case 'O':
        printf("%c is a Vowel", ch);
        break;
    case 'U':
        printf("%c is a Vowel", ch);
        break;
    default:
        printf("%c is a Consonant", ch);
    }

    return 0;
}