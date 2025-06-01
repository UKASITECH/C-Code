#include<stdio.h>

void printarray(int *l, int n);
// or we can define a array in function like these 
void preintarr(int k[], int n);

int main(){
    // Using Loops in ararys
    int x[5];
    printf("Enter marks of 5 students : \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]); // & is important here to assign values to pointers
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The Value of index at %d is %d\n",i, x[i]);
    }

    // as per the upper program we can use loops to print values of index in a row
    int cgpa[] = {9, 8, 8};
      for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    
    // pointer arithmetic
    int a = 32;
    int *i = &a;
    i++;
    printf("The value of a is %d and i is %d",&a,i);

    // Accessing arrays using pointers
    int fk[0];
    int *ptr = &fk[0];
    ptr++;
    *ptr; // will have 9 as its value

    // we can pass a arrays to a function using these
    int arr[10], n;
    printarray(arr, n);

    // Multi-dimensional arrays - an arrays can be 2 dimension/ 3 dimension/ n dimension
    // a 2d arrays can be defined like this
    int arr[3][2] = {{1,4}
                     {5,3}
                     {33,56}};

    return 0;
}
