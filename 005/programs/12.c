#include <stdio.h>

int main()
{
    int a, b, lcm, hcf;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    // hcf
    if(a < b)
        hcf = a;
    else
        hcf = b;
    while(hcf > 0)
    {
        if( a % hcf==0 && b % hcf == 0 )
            break;
        hcf--;
    }
    // lcm
    lcm = a * b / hcf;
    printf("The hcf of %d and %d is %d\n", a, b, hcf);
    printf("The lcm of %d and %d is %d\n", a, b, lcm);
    return 0;
}