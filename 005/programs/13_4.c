#include <stdio.h>

int main()
{
    int j, i, count=0;
    for(j=0; j<5; j++)
    {
        for(i=0; i<j+1; i++)
            printf("%d  ", ++count);
        printf("\n");
    }
    return 0;
}
