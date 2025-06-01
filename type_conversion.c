#include<stdio.h>

int main(){
    // Type conversion is a process where we convert pre-existing type of variable to another type of ex:
    // int a; - float but wihtout editing the code
    // int and int is int - 
    // int and float is float
    // float and float is float
    //5/2 becomes 2 as both the operands are int
    //5.0/2 becomes 2.5 as one of the operands is float
    //2/5 becomes 0 as both the operands are int

    // Syntax:
    // int a = 3.1;
    // float a = 8;

    // Quick Quiz: int k = 3.0 /9; value of k? and why?
    int k = 3.0 /9;
    printf("%d",k);
    // reason -  3.0/9 = 0.333. But since k is an int, it cannot store floats & value 0.33 is demoted to 0.
    return 0;
}

// The Program Runs perfectly.