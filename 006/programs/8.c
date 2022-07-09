#include <stdio.h>

int  global_a;

void counter()
{
    static int count;
    count++;
    printf("The count is: %d\n", count);
}

void increment_global_a()
{
    global_a++;
}

int main()
{
    printf("Global a = %d\n", global_a);
    increment_global_a();
    increment_global_a();
    printf("Global a after function calls = %d\n", global_a);
    counter();
    counter();
    counter();
    return 0;    
}