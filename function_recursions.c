#include <stdio.h>

// function
void display()
{
    printf("Umang is a display");
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// Recursions
int factorial(int x)
{
    int f;
    if (x == 0 || x == 1)
    {
        return 1; // a program to calculate factorial using recursion
    }
    else
    {
        f = x * factorial(x - 1);
        return f;
    }
}
int main()
{
    // function is a block of code which performs a perticular tasks
    display();

    // function prototype informs that the function will be defined in the program later.
    //  function call instructs the compiler to execute the function's body when the call is made
    //  types of functions : library function and user-defined function
    int d = sum(5, 5);
    printf("\n The sum is %d", d);
    // here this is an example of user-defiend function
    // the functions that are already defined in c compiler is library function

    // recursions

    return 0;
}