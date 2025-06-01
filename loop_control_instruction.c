#include<stdio.h>

int main(){
    // Loops are just repeatition of a block of code with a condition and also with no conditions which runs endleslly
    /*There are 3 types of loops - 1. While loop
     2. do-while loop
     3. for loop
    */

    // while loop - 
    int a = 1;
    while (a<11)
    {
      printf("%d\n",a);  
      a++;
    }
    
    // for loop
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n",i);
    }
    
    // do while loop
    int w = 10;
    do
    {
        printf("%d\n",w);
    } while (w<=1);

    // increment operator - i++ - +1
    // decrement operator - --i - -1
    
    return 0;
}