#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("%d is an leap year.\n");
    else
        printf("%d is not a leap year\n");
    return 0;
}