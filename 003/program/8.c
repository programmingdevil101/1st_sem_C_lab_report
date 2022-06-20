#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &a, &b);
    printf("Enter a operator (+, -, *, /): ");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("Sum = %d\n", a+b);
        break;
    case '-':
        printf("Difference = %d\n", a-b);
        break;
    case '*':
        printf("Product = %d\n", a*b);
        break;
    case '/':
        printf("Quotient = %d\n", a/b);
        break;
    
    default:
        printf("Invalid operator %c\n", c);
        break;
    }
    return 0;
}