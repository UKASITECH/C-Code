#include <stdio.h>

int main()
{
    // an arrays is a collection of similar elements. Array allows a single variable to store multiple values
    int marks[100];
    char name[20];
    float percentile[90];

    // Now we can assign the values to make array like:
    marks[0] = 33;
    marks[1] = 20;

    name[0] = 'U';
    name[1] = 'M';
    name[2] = 'A';
    name[3] = 'N';
    name[4] = 'G';

    // it can stores upto that value which it was assigned
    // access array value
    printf("\n%d", marks[1]);
    printf("\n%c", name[4]);

    // taking array value from the user
    printf("\nEnter a vlaue : ");
    scanf("%c", name[5]);
    printf("\nEnter a vlaue : ");
    scanf("%c", name[6]);
    printf("\n%c", name[5]);
    printf("\n%c", name[6]);

    // initialization of an array
    int cgpa[3] = {9, 8, 8};
    float marks[] = {33, 40};

    // arrays in memory
    int arr[3] = {1, 2, 3};
    // each byte is 4 hence, 3 elemnets is 4x3 is 12
    // pointer arithmetic
    int i = 32;
    int *a = &i; // a = 87994
    a++;         // address of i or value of a = 87998
    char a = 'A';
    char *b = &a; // a= 87994
    b++;          // now a = 87995
    float i = 1.7;
    float *a = &i;

    // Accessing array using pointer
    int *ptr = &arr[0];
    ptr++;
    *ptr;

    // passing arrays to functions
    
    return 0;
}