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


### **WAP to input a character from user and check whether the character is vowel or consonant**

#### Code
    #include <stdio.h>

    int main()
    {
        char c;
        printf("Enter a character: ");
        scanf("%c", &c);

        switch (c)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel\n", c);
            break;

        default:
            printf("%c is a consonant\n", c);
            break;
        }

        return 0;
    }

#### Output
    Enter a character: T
    T is a consonant


### **WAP to input a character from the user and check whether the character is Alphabet**

#### Code
    #include <stdio.h>

    int main()
    {
        char c;
        printf("Enter a character: ");
        scanf("%c", &c);
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            printf("The %c character is an alphabet\n", c);
        else
            printf("The %c character is not an Alphabet\n", c);
        return 0;
    }

#### Output
    Enter a character: D
    The D character is an alphabet