#include <stdio.h>

int main()
{
    int j, space, star;
    for(j=4; j>=0; j--)
    {
        // spaces
        for(space=0; space<j; space++)
            printf(" ");
        // star
        for(star=0; star<2*(5-j)-1; star++)
            printf("*");
        printf("\n");
    }
    return 0;
}
