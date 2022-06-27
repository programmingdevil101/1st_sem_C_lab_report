#include <stdio.h>

int main()
{
    int A = 15, C = 35;
    float B = 20.43;
    printf("A=%7d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|\n", A, A, A, A, A, A, A, A, A, A);
    printf("B=%7.2f|%-7.2f|%7.2f|%-7.2f|%7.2f|%-7.2f|%7.2f|%-7.2f|%7.2f|%-7.2f|\n", B, B, B, B, B, B, B, B, B, B);
    printf("C=%7d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|\n", C, C, C, C, C, C, C, C, C, C);
    return 0;
}