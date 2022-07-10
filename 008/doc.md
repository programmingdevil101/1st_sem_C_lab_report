# To be familiar with pointers

### **WAP to find the sum and difference of two numbers using pointers.**

#### **Code**
    #include <stdio.h>

    int main()
    {
        int a, b, sum, diff;
        int *p_a, *p_b, *p_sum, *p_diff;
        p_a = &a;
        p_b = &b;
        p_sum = &sum;
        p_diff = &diff;
        printf("Enter two numbers: ");
        scanf("%d%d", p_a, p_b);
        *p_sum = *p_a + *p_b;
        *p_diff = *p_a - *p_b;
        printf("Sum = %d\nDifference = %d\n", *p_sum, *p_diff);
        return 0;
    }

#### **Output**
    Enter two numbers: 2 10
    Sum = 12
    Difference = -8



### **WAP to read two values from the user in main(). Write a fuunction calculate() to**
### **calculate sum, product, difference and quotient of the numbers. Print the sum, product**
### **, difference and quotient in the main fucntion using pass by reference concept.**

#### **Code**
    #include <stdio.h>

    void calculate(int* a, int*b, int* sum, int* diff, int* prod, int *quot)
    {
        *sum = *a + *b;
        *diff = *a - *b;
        *prod = *a * *b;
        *quot = *a / *b;
    }

    int main()
    {
        int a, b, sum, diff, prod, quot;
        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);
        calculate(&a, &b, &sum, &diff, &prod, &quot);
        printf("Sum = %d \nDifference = %d \nProduct = %d\nQuotient = %d\n", sum, diff, prod, quot);
        return 0;
    }


#### **Output**
    Enter two numbers: 10 2
    Sum = 12 
    Difference = 8
    Product = 20
    Quotient = 5


### **WAP to access the elements of the array using the pointers.**

#### **Code**
    #include <stdio.h>

    int main()
    {
        int n, i, array[100];
        printf("Enter the numbers of integers to be stored: ");
        scanf("%d", &n);
        printf("Enter the integers: \n");
        // write into array
        for(i=0; i<n; i++)
            scanf("%d", array+i);

        printf("The elements are: \n");
        for(i=0; i<n; i++)
            printf("%d\n", *(array + i));
        return 0;
    }

#### **Output**
    Enter the numbers of integers to be stored: 5
    Enter the integers: 
    1 2 3 4 5
    The elements are: 
    1
    2
    3
    4
    5