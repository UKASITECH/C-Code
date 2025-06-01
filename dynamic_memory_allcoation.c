#include <stdio.h>
#include <stdlib.h> // it is nessary while working with dma

int main()
{
    // Dynamic memory allocation is a way to allocate memory to a data strucutures during the runtime. we
    int n;
    scanf("%d", &n);
    //  int arr[n]; -> not allowed
    // to do things in memory at a very high level we use dma.
    // Functioon for dynamic memory allocation
    // malloc() - memory allocation- it takes number of bytes to be allocated as an input and returns a pointer of type void.
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    // calloc() - continues allocation - it intialises each memory bloack with a default value of 0
    ptr = ptr = (float *)calloc(30, sizeof(float));
    // allocates contiguous space in memory for 30 blocks (floats)

    // free() - it is used to deallocate the memory
    free(ptr);

    // realloc() - Sometimes the dynamically allocated memory is insufficient or more than required.
    // realloc is used to allocate memory of new size using the previous pointer and size.

    ptr = realloc(ptr, newsize);
    ptr = realloc(ptr, 3*sizeof(int));

        return 0;
}