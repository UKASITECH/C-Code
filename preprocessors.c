#include<stdio.h>
// #include "hellio.c"
#define PI 3.14
#include<stdlib.h>


int main(){
    float var = PI;
    printf("The value of pi is %f\n", var);
    printf("File name is %s\n", __FILE__);
    printf("todays date is %s\n", __DATE__);

    return 0;
}