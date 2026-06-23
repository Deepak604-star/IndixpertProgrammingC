#include <stdio.h>

int add();
int subtract();
int multiply();
int division();


int add()
{
    int a = 10;
    int b = 20;
    printf("Sum = %d\n", a + b);
}

int subtract()
{
    int a = 20;
    int b = 10;
    printf("Subtraction = %d\n", a - b);
}

int multiply()
{
    int a = 10;
    int b = 20;
    printf("Multiplication = %d\n", a * b);
}

int division()
{
    int a = 20;
    int b = 10;
    printf("Division = %d\n", a / b);
}

int main()
{
  
    add();
    subtract();
    multiply();
    division();

    return 0;
}