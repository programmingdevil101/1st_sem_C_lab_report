# To be familiar with functions


### **Write a program to add, subtract, multiply and divide two integers using user defined**
### **function add(), sub(), mul() and div().**


### **Code**
    #include <stdio.h>

    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);

    int main()
    {
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("Sum = %d\n", add(a, b));
        printf("Difference = %d\n", sub(a, b));
        printf("Product = %d\n", mul(a, b));
        printf("Quotient = %d\n", div(a, b));
        return 0;
    }




    int add(int a, int b)
    {
        return a + b;
    }


    int sub(int a, int b)
    {
        return a - b;
    }


    int mul(int a, int b)
    {
        return a * b;
    }


    int div(int a, int b)
    {
        return a / b;
    }

### **Output**
    Enter two numbers: 3 7
    Sum = 10
    Difference = -4
    Product = 21
    Quotient = 0



### **WAP to display sum of series: x + x<sup>2</sup>/2! + x<sup>3</sup>/3! + x<sup>4</sup>/4! + x<sup>5</sup>/5! ... x<sup>n</sup>/n!.**
### **User defined function factorial() and power() should be used to calculate the factorial and power.**


### **Code**
    #include <stdio.h>

    int pow_(int base, int power)
    {
        int res = 1;
        while(power-- > 0)
        {
            res *= base;
        }
        return res;
    }

    long factorial(int n)
    {
        if(n<2)
            return 1;
        return n * factorial(n-1);
    }

    int main()
    {
        int n, i, x;
        double sum=0.0;
        printf("Enter the value of x and n: ");
        scanf("%d%d", &x, &n);
        for(i=1; i<=n; i++)
            sum += (float)pow_(x, i) / factorial(i);
        printf("%d/1! + %d^2/2! + . . . . + %d^%d/%d! = %lf\n", x, x, x, n, n, sum);
        return 0;
    }

### **Output**
    Enter the value of x and n: 2 10
    2/1! + 2^2/2! + . . . . + 2^10/10! = 6.388995


### **WAP to calculate factorial using Recursion.**


### **Code**
    #include <stdio.h>

    long factorial(int n)
    {
        if(n<2)
            return 1;
        return n * factorial(n-1);
    }


    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Factorial of %d = %ld\n", n, factorial(n));
        return 0;
    }

### **Output**
    Enter a number: 10
    Factorial of 10 = 3628800


### **WAP to display the nth Fibonacci number using recursion.**

### **Code**
    #include <stdio.h>

    int fibonacci(int n)
    {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        return fibonacci(n-1) + fibonacci(n-2);
    }

    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%dth fibonacci = %d\n", n, fibonacci(n));
        return 0;
    }

### **Output**
    Enter a number: 10
    10th fibonacci = 55


### **WAP to take two numbers in main(). Write a function Swap() to swap the values of**
### **the variables. Print the swapped values in main().**

### **Code**
    #include <stdio.h>

    void swap(int* a, int* b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    int main()
    {
        int a, b;
        printf("Enter the values of a and b: ");
        scanf("%d%d", &a, &b);
        printf("The value before swapping: a = %d \t b = %d\n", a, b);
        swap(&a, &b);
        printf("The value after swapping: a = %d \t b = %d\n", a, b);
        return 0;
    }

### **Output**
    Enter the values of a and b: 2 10
    The value before swapping: a = 2         b = 10
    The value after swapping: a = 10         b = 2


### **WAP to take two float number in main(). Write a function single user define function**
### **calculator() to perform the addition, subtraction and multiplication. The sum,**
### **difference and product should be displayed from the main() function. [Use the**
### **concept of pass by reference.].**

### **Code**
    #include <stdio.h>

    void calculate(float* a, float*b, float* sum, float* diff, float* prod)
    {
        *sum = *a + *b;
        *diff = *a - *b;
        *prod = *a * *b;
    }

    int main()
    {
        float a, b, sum, diff, prod;
        printf("Enter two floating point numbers: ");
        scanf("%f%f", &a, &b);
        calculate(&a, &b, &sum, &diff, &prod);
        printf("Sum = %.2f \nDifference = %.2f \nProduct = %.2f\n", sum, diff, prod);
        return 0;
    }

### **Output**
    Enter two floating point numbers: 2.3 4.5
    Sum = 6.80 
    Difference = -2.20
    Product = 10.35


### **WAP to input a integer number in main(). Write a user define function isPrime() to**
### **calculate whether the number is prime of not. Print whether the number is prime or**
### **not from the main().**

### **Code**
    #include <stdio.h>

    #define TRUE 1
    #define FALSE 0

    int is_prime(int n)
    {
        int i;
        if(n <= 1)
            return FALSE;
        else if(n == 2)
            return TRUE;
        else if(n % 2 == 0)
            return FALSE;
        for(i=3; i<= n/2; i += 2)
        {
            if(n % i == 0)
                return FALSE;
        }
        return TRUE;

    }

    int main()
    {
        int n, prime;
        printf("Enter a number: ");
        scanf("%d", &n);
        prime = is_prime(n);
        if(prime)
            printf("The number %d is a prime.\n", n);
        else
            printf("The number %d is not a prime.\n", n);;
        return 0;
    }

### **Output**
    Enter a number: 97
    The number 97 is a prime.


### **WAP to illustrate the concept of global and static variables.**

### **Code**
    #include <stdio.h>

    int  global_a;

    void counter()
    {
        static int count;
        count++;
        printf("The count is: %d\n", count);
    }

    void increment_global_a()
    {
        global_a++;
    }

    int main()
    {
        printf("Global a = %d\n", global_a);
        increment_global_a();
        increment_global_a();
        printf("Global a after function calls = %d\n", global_a);
        counter();
        counter();
        counter();
        return 0;    
    }

### **Output**
    Global a = 0
    Global a after function calls = 2
    The count is: 1
    The count is: 2
    The count is: 3