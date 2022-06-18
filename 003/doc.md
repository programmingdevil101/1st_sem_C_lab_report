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


### **WAP to input a character from the user and check whether the character is Alphabet.**
### **If the character is Alphabet then show whether it is uppercase or lowercase.**

#### Code
    #include <stdio.h>

    int main()
    {
        char c;
        printf("Enter a character: ");
        scanf("%c", &c);
        if(c >= 'a' && c <= 'z')
            printf("The %c character is an lowercase alphabet\n", c);
        else if(c >= 'A' && c <= 'Z')
            printf("The %c character is an uppercase alphabet\n", c);
        else
            printf("The %c character is not an Alphabet\n", c);
        return 0;
    }

#### Output
    Enter a character: D
    The D character is an uppercase alphabet


### **WAP to check whether the year entered by the user is a leap year or not**

#### Code
    #include <stdio.h>

    int main()
    {
        int year;
        printf("Enter a year: ");
        scanf("%d", &year);
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            printf("%d is an leap year.\n");
        else
            printf("%d is not a leap year\n");
        return 0;
    }

#### Output
    Enter a year: 1900
    1900 is not a leap year


### **WAP to check whether the number entered by the user is divisible by 5 and 11 or not**

#### Code
    #include <stdio.h>

    int main()
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num % 55 == 0)
            printf("Ther number %d is divisible by 5 and 11\n", num);
        else if(num % 5 == 0)
            printf("ther number %d is only divisible by 5\n", num);
        else if(num % 11 == 0)
            printf("The number %d is only divisible 11\n", num);
        else
            printf("The number %d is not divisible by both 5 and 11\n", num);
        return 0;
    }

#### Output
    Enter a number: 110
    The number 110 is divisible by 5 and 11


### **WAP to find the roots of quadratic equation.**

#### Code
    TODO

#### Output
    TODO


### **WAP to input two numbers and operator among [ +, -, \*, /].If the user enters + then the program should perform the addition of the number and display the sum. If the user enters - then the program should perform the subtraction of number and display the difference and so on for \* and /.**

#### Code
    TODO

#### Output
    TODO


### **WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied Mechanics and Basic Electrical. Display whether the students passed or failed. Take F.M = 100 and PM = 40. For passed students calculate percentage and grade according to following:**
- Percentage >= 90% : A
- Percentage >= 80% : B
- Percentage >= 70% : C
- Percentage >= 60% : D
- Percentage >= 40% : E

#### Code
    TODO

#### Output
    TODO


### **WAP to input a number from user. If the user enters a number less than or equal to zero then program should just display the number. If the user enters 1 the program should display the output as neither prime nor composite, if the user enters 2 the program should display output as smallest and only even prime number. If the user enters number greater than 2 the program should check whether the number is prime or not, also if the number is not prime the program should display if it is even or odd.**

#### Code
    TODO

#### Output
    TODO