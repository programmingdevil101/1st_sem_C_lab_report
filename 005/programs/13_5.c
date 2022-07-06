#include <stdio.h>

int main()
{
    int j, i, space;
    for(j=5; j>0; j--)
    {
        // space
        for(space=0; space < 2*(5-j); space++)
            printf(" ");
        // increasing number upto j
        for(i=1; i<j+1; i++)
            printf("%d ", i);
        // decreasing number from j-1 to 1;
        for(i=j-1; i>0; i--)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
