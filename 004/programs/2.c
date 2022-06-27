#include <stdio.h>

int main()
{
    char c;
    int ascii_value;
    puts("Enter a character: ");
    c = getchar();
    ascii_value = c;
    printf("The ascii value of %c is %d\n", c, ascii_value);
    return 0;
}
