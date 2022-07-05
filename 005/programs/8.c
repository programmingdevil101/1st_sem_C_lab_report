#include <stdio.h>

int main()
{
    int n, sum=0, i, mod, og_num;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    og_num = n;
    for(i=0; i<3; i++)
    {
        mod = n % 10;
        n /= 10;
        sum += mod * mod * mod;
    }
    if(sum == og_num)
        printf("The number %d is an armstrong number.\n", og_num);
    else
        printf("The number %d is not a armstrong number.\n", og_num);
    return 0;
}