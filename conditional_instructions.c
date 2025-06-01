#include <stdio.h>

int main()
{
    // Condittional statements are those which helps in desison taking in c language
    // There are two types of C.s. : if-else and switch statement

    // if else statement
    int x, y;
    printf("Enter a number less than 5: ");
    scanf("%d", &x);
    if (x <= 5)
    {
        printf("good job");
    }
    else
    {
        printf("I said just pick a number less than 5!!!");
    }
    // Relational Operators are - == , >=, <=, <, >
    // we have already used them in the upper program

    // Logical Operators
    // &&(and) , ||(or) , !(not)

    // && usage
    int a = 5;
    int b = 4;
    if (a == 5 && b == 3)
    {
        printf("\nUmang is Great");
    }
    else
    {
        printf("\nUmang is Noob");
    } // here 1 condition is wrong between both whole program will become false

    // || usage
    int c = 5;
    int d = 4;
    if (c == 5 || d == 3)
    {
        printf("\nUmang is Great");
    }
    else
    {
        printf("\nUmang is Noob");
    } // here if 1 of two conditons is true whole program will become true

    // ! usage
        int x = 10;
        int y = 0;

        if (!y)
        {
            printf("y is false (0)\n");
        }

        if (!(x > 20))
        {
            printf("x is not greater than 20\n");
        }
         // here it operates on a single operand. If the operand is true (non-zero), ! returns false (0), and if the operand is false (0), it returns true (1).

return 0;
}