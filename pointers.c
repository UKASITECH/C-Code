#include <stdio.h>

int main()
{
    int x; // Now Our compiler has stored a place for this variable in RAM
    int *y;
    printf("%d", x);
    printf("\n%d", *y);
    // if we put a * in back any variable name its is stored as type pointer
    // in this program we can see that *y is sored as variable y of type int-pointer
    int b = &y;
    printf("\n%d", b);
    // here j stores address of i in j

    int i = 8;
    int *j;
    j = &i;
    printf("add i= %u\n", &i);
    printf("add i= %u\n", j);
    printf("add j= %u\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j); 
    
    // Pointer to a pointer
    int **k;
    k = &j;
    // just passing or swping the pointer balues
    return 0;
}