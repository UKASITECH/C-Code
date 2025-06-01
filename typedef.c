#include<stdio.h>

int main(){
    // we can define our own functions using typedef 
    // if we want to create our own keyword, then typedef is used
    // syntax - typedef <previos_name> <alias_name>;
    typedef unsigned long ul;
    ul l1,l2,l3;
    typedef int umang; // now int is umang
    umang x,y,z;
    x= 1;
    printf("%d",x);
    return 0;
}
