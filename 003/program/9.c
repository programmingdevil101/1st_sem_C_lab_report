#include <stdio.h>

int main()
{
    float c, ap, phy, math, elec;
    float percent;
    printf("Enter the marks of five subjects: ");
    scanf("%f%f%f%f%f", &c, &ap, &phy, &math, &elec);
    if(c < 40.0 || ap < 40.0 || phy < 40.0 || math < 40.0 || elec < 40.0)
    {
        printf("The student failed\n");
    }
    else
    {
        percent = (c + ap + phy + math + elec) / 5;
        if(percent >= 90.0)
            printf("The student passed with grade A\n");
        else if(percent >= 80.0)
            printf("The student passed with grade B\n");
        else if(percent >= 70.0)
            printf("The student passed with grade C\n");
        else if(percent >= 60.0)
            printf("The student passed with grade D\n");
        else if(percent >= 40.0)
            printf("The student passed with grade E\n");        
    }
    return 0;

}