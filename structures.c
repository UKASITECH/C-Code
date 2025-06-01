#include <stdio.h>
#include <string.h>

// syntax of structures
struct employee
{
    int code; // declears a user defined data tyoe
    float salary;
    char name[10];
}; // ; is important

// using typedef in structures
struct complex{
    float real;
    float img;
};

typedef struct complex{
    float real;
    float img;
} complexNo;

void show(struct employee e);
int main()
{
    // arrays and strings can hold similar data
    // Structures can hold disimilar data
    // initialize strucutres in main function

    struct employee e1; // structure variable or source
    strcpy(e1.name, "umang");
    e1.code = 444;
    e1.salary = 71.22;

    // arrays of strucutres
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;
    // And so on

    // pointers in structures 
    struct employee *ptr;
    ptr = &e1;
    // print the structure elements using:
    printf("%d",(*ptr).code);
    
    // arrow operator - insted of writing (*ptr).code we can:
    ptr->code
    // here -> is known as the arrow operator

    // passing strucutres to a function



    return 0;
}