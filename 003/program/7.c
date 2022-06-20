#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, determinant, root1, root2, real, img;
    printf("Enter the values of a, b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    determinant = b*b - 4*a*c;
    if(determinant == 0)
    {
        root1 = root2 = -b / (2.0 * a);
        printf("root1 = root2 = %.2lf\n", root1);
    }
    else if(determinant > 0)
    {
        root1 = (-b + sqrt(determinant) ) / (2.0 * a);
        root2 = (-b - sqrt(determinant) ) / (2.0 * a);
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    else
    {
        real = -b / (2.0 * a);
        img = sqrt( -determinant ) / (2.0 * a);
        printf("root1 = %.2lf + %.2lfi and root 2 = %.2lf - %.2lfi\n", real, img, real, img);
    }
    return 0;
}