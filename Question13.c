//C program to check vowel or consonant using switch case.
#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    //Check if it's alphabet or not
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
        //check if it's vowel or consonant
        switch(c)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a vowel.\n",c);
                break;
            default:
                printf("%c is a consonant.\n",c);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",c);
    }

    return 0;
}
