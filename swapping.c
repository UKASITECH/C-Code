#include<stdio.h>
void swap(int* a, int* b);
void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4;
    int b = 6;
    printf("The value of a is %d and b is %d before swapping\n",a,b);
    swap(&a,&b);
    printf("After swapping the values of a is %d and b is %d",a,b);
    
    // We can swap the values of any variable by using their pointer locations
    
    return 0;
}