# To be familiar with selective structure (branching)

## OBJECTIVES
    1. To learn about if, if..else, if..else if..else statements
    2. to learn about switch statements

### **WAP to check whether a number is negative, positive or zero**

#### Algorithm
    step 1: start
    step 2: declare n
    step 3: read n
    step 4: if n is less than 0 then go to step 5 otherwise go to step 6
    step 5: write the number is negative
    step 6: if number is equal to 0 go to step 7 otherwise go to step 8
    step 7: write the number is zero
    step 8: write the number is positive
    step 9: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_1.svg)

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

#### Algorithm
    step 1: start
    step 2: declare a, b, c;
    step 3: read a, b, c;
    step 4: if a is greater than b and a is greater than c then go to step 5 otherwise go to step 6
    step 5: write a is maximum
    step 6: if b is greater than c then  go to step 7 otherwise go to step 8
    step 7: write b is maximum
    step 8: write c is maximum
    step 9: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_2.svg)

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

#### Algorithm
    step 1: start
    step 2: declare c
    step 3: read c
    step 4: if c is any of a, e, i, o, u go to step 5 otherwise go to step 6
    step 5: write the given character is vowel
    step 6: write the given character is consonant
    step 7: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_3.svg)

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

#### Algorithm
    step 1: start
    step 2: declare c
    step 3: read c
    step 4: if c is in between a-Z go to step 5 otherwire go to step 6
    step 5: Write the given character is an lowercase alphabet
    step 6: if c is in between A-Z go to step 7 otherwise go to step 8
    step 7: write the given character is an uppercase
    step 8: write the given character is not an alphabet
    step 9: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_4.svg)

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

#### Algorithm
    step 1: start
    step 2: declare year
    step 3: read year
    step 4: if year is divisible by 400 or year is divisible by 4 but not by 100 then go to step 5 otherwise go to step 6
    step 5: write the given year is a leap year
    step 6: write the given year is not a leap year
    step 7: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_5.svg)

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

#### Algorithm
    step 1: start
    step 2: declare num
    step 3: read num
    step 4: if num is divisible by 55 then go to step 5 otherwise go to step 6
    step 5: write the number is divisible by 5 and 11
    step 6: if number is divisible by 5 then go to step 7 otherwise go to step 8
    step 7: write the number is only divisible by 5
    step 8: if number is divisible by 11 go to step 9 otherwise go to step 10
    step 9: Write the number is only divisible by 11
    step 10: Write the number is not divisible by both 5 and 11
    step 11: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_6.svg)

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
            printf("The number %d is only divisible by 5\n", num);
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

#### Algorithm
    step 1: start
    step 2: declare variables
    step 3: read a, b and c
    step 4: calculate: determinant = b*b - 4ac
    step 5: if determinant is 0 go to step 6 otherwire go to step 7
    step 6: calculate root1 = root2 = -b/2a
    step 7: if determinant is greater than 0 go to step 8 otherwise go to step 9
    step 8: calculate root1 and root2 using quadratic formula
    step 9: calculate real and imaginary parts and hence root1 and root2
    step 10: write root1 and root2
    step 11: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_7.svg)

#### Code
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

#### Output
    Enter the value of a, b and c: 1, 0, -4
    root1 = 2.00 and root2 = -2.00


### **WAP to input two numbers and operator among [ +, -, \*, /].If the user enters + then the program should perform the addition of the number and display the sum. If the user enters - then the program should perform the subtraction of number and display the difference and so on for \* and /.**

#### Algorithm
    step 1: start
    step 2: declare variables
    step 3: read c
    step 4: if c is + go to step 5 if c is - go to step 7 if c is * go to step 9 if c is / go to step 11 otherwise go to step 13
    step 5: calculate sum = a+b
    step 6: write sum
    step 7: calculate difference = a-b
    step 8: write difference
    step 9: calculate product = a*b
    step 10: write product
    step 11: calculate quotient = a/b
    step 12: write quotient
    step 13: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_8.svg)

#### Code
    #include <stdio.h>

    int main()
    {
        int a, b;
        char c;
        printf("Enter two numbers a and b: ");
        scanf("%d%d", &a, &b);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &c);
        switch (c)
        {
        case '+':
            printf("Sum = %d\n", a+b);
            break;
        case '-':
            printf("Difference = %d\n", a-b);
            break;
        case '*':
            printf("Product = %d\n", a*b);
            break;
        case '/':
            printf("Quotient = %d\n", a/b);
            break;

        default:
            printf("Invalid operator %c\n", c);
            break;
        }
        return 0;
    }

#### Output
    Enter two numbers a and b: 10 5
    Enter an operator(+, -, *, /): *
    Product = 50


### **WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied Mechanics and Basic Electrical. Display whether the students passed or failed. Take F.M = 100 and PM = 40. For passed students calculate percentage and grade according to following:**
- Percentage >= 90% : A
- Percentage >= 80% : B
- Percentage >= 70% : C
- Percentage >= 60% : D
- Percentage >= 40% : E

#### Algorithm
    step 1: start
    step 2: declare variables
    step 3: read subject marks
    step 4: if any of the subject marks is less than 40 go to step 5 otherwise go to step 6
    step 5: Write the student failed
    step 6: calculate percent = total marks / 5
    step 7: if percent is greater than or equal to 90 go to step 8 otherwise go to step 9
    step 8: write the student passed with grade A
    step 9: if percent is greater than or equal to 80 go to step 10 otherwise go to step 11
    step 10: write the student passed with grade B
    step 9: if percent is greater than or equal to 70 go to step 11 otherwise go to step 12
    step 11: write the student passed with grade C
    step 9: if percent is greater than or equal to 60 go to step 12 otherwise go to step 13
    step 12: write the student passed with grade D
    step 13: write the student passed with grade E
    step 14: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_9.svg)

#### Code
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

#### Output
    Enter the marks of five subjects: 50 56 76 83 45
    The student passed with grade D


### **WAP to input a number from user. If the user enters a number less than or equal to zero then program should just display the number. If the user enters 1 the program should display the output as neither prime nor composite, if the user enters 2 the program should display output as smallest and only even prime number. If the user enters number greater than 2 the program should check whether the number is prime or not, also if the number is not prime the program should display if it is even or odd.**

#### Algorithm
    step 1: start
    step 2: declare variables
    step 3: read num
    step 4: if n is less than or equal to 0 go to step 5 otherwire go to step 6
    step 5: write num
    step 6: if number is equal to 1 go to step 7 otherwise go to step 8
    step 7: write "neither prime nor composite"
    step 8: if number is equal to 2 go to step 9 otherwise go to step 10
    step 9: write "smallest and only even prime"
    step 10: next = 2
    step 11: if next less than or equal to num / 2 go to step 12 otherwise go to step 16
    step 12: if num is divisible by next go to step 13 otherwise go to step 14
    step 13: is_prime = 1
    step 14: next = next + 1
    step 15: go to step 11
    step 16: if is_prime equals to 0 go to step 17 otherwise go to step 18
    step 17: write the number is prime
    step 18: if the number is divisible by 2 go to step 19 otherwise go to step 20
    step 19: write the number is even
    step 20: write the number is odd
    step 21: stop

#### Flowchart
![](../res/lab_sheet_3_flow_chart_10.svg)

#### Code
    #include <stdio.h>
    int main()
    {
        int num, next, is_prime = 0;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num <= 0)
        {
            printf("%d\n", num);
        }
        else if(num == 1)
        {
            printf("Neither prime nor composite\n");
        }
        else if(num == 2)
        {
            printf("Smallest and only prime number\n");
        }
        else
        {
            for(next = 2; next <= (num / 2); next += 1) {
                if(num % next == 0)
                {
                    is_prime = 1;
                    break;
                }
            }
            if(is_prime == 0)
            {
                printf("The number %d is prime\n", num);
            }
            else
            {
                if(num % 2 == 0)
                    printf("The number is even\n");
                else
                    printf("The number is odd\n");
            }
        }
        return 0;
    }

#### Output
    Enter a number: 29
    The number 29 is a prime