#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("The %c character is an alphabet\n", c);
    else
        printf("The %c character is not an Alphabet\n", c);
    return 0;
}