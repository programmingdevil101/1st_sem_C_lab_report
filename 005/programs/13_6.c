#include <stdio.h>

int main()
{
    int j, i;
    for(j=5; j>0; j--)
    {
        for(i=5; i>5-j; i--)
            printf("%d  ", i);
        printf("\n");
    }
    return 0;
}
