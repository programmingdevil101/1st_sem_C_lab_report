# To be familiar with selective structure (branching)

## OBJECTIVES
    1. TODO
    2. TODO

### **WAP to check whether a number is negative, positive or zero**

#### Code
    #include <stdio.h>

    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n < 0)
            printf("The number is negative\n");
        else if(n == 0)
            printf("The number is zero\n");
        else
            printf("The number is positive\n");
        return 0;
    }

#### Output
    Enter a number: 12
    The number is positive



### **WAP to find maximum between three numbers entered by user**

#### Code
    #include <stdio.h>

    int main()
    {
        int a, b, c;
        printf("Enter the values for a, b, c: ");
        scanf("%d%d%d", &a, &b, &c);
        if(a > b && a > c)
            printf("%d is maximum number\n", a);
        else if(b > c)
            printf("%d is maximum number\n", b);
        else
            printf("%d is maximum number\n", c);
        return 0;
    }

#### Output
    Enter the values for a, c, c: 10 3 12
    12 is the maximum number