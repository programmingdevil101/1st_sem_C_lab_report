#include <stdio.h>

int main()
{
    char name[30], address[30];
    puts("Enter your name: ");
    fgets(name, 30, stdin);
    puts("");
    puts("Enter your address: ");
    fgets(address, 30, stdin);
    puts("");
    puts("Name: ");
    puts(name);
    puts("Address: ");
    puts(address);
    return 0;
}