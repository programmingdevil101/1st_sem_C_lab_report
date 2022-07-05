# To be familiar with LOOPS

### **WAP to read 10 numbers from users and fins the sum and average.**

#### **Code**
    #include <stdio.h>

    int main()
    {
        int sum = 0, num, i;
        float avg;
        printf("Enter 10 numbers: ");
        for(i=0; i<10; i++)
        {
            scanf("%d", &num);
            sum += num;
        }
        avg = sum / 10.0;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
        return 0;
    }

#### **Output**
    Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
    Sum = 55
    Average = 5.50


### **WAP to display the multiplication table of integer given by the user.**

### **Code**
    #include <stdio.h>

    int main()
    {
        int num, i;
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("\nMULTIPLICATION TABLE OF %d\n", num);
        for(i=1; i<=10; i++)
        {
            printf("%3d * %-2d =  %d\n", num, i, num*i);
        }
        return 0;
    }


#### **Output**
    Enter a number: 9

    MULTIPLICATION TABLE OF 9
      9 * 1  =  9
      9 * 2  =  18
      9 * 3  =  27
      9 * 4  =  36
      9 * 5  =  45
      9 * 6  =  54
      9 * 7  =  63
      9 * 8  =  72
      9 * 9  =  81
      9 * 10 =  90