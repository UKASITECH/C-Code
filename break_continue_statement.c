#include <stdio.h>

int main()
{
    // break statement is used to break the statement after the end of any type of program or loop
    for (int i = 0; i < 1000; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
    }

    // Continue statement is used to immidiatly move to the next itteration of the code
    int skip = 5;
    int i = 0;
    while (i < 10)
    {
        if (i == skip)
        {
            i++;
            continue; // skips the rest of the loop body for i == 5
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}