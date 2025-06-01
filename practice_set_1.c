#include <stdio.h>

int main()
{
    // Q1. Write area of rectangle
    // Hard Code Input -
    int l = 10;
    int b = 20;
    printf("The area of rectangle is %i \n",l*b);
    // // Using User input
    int len,br;
    printf("Enter the value of length :");
    scanf("%d", &len);
    printf("Enter the value of breath :");
    scanf("%d", &br);
    printf("The Area of Rectange is %d\n", len*br);

    // Q2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

    // Area of Circle - πr2
    float py = 3.14;
    int r;
    printf("Enter The Value of r: ");
    scanf("%d", &r);
    printf("The area of circle is %f", py*r*r);

    // Q. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

    // Formula - f = (c*9/5) + 32
    int celcious = 5;
    int f = ((celcious*9/5)+32);
    printf("The Value of Celcious %d in Ferenhiet is %d",celcious, f);

    /* Q. Write a program to calculate simple interest for a set of values representing
    principal, number of years and rate of interest.
    */
    
    // Formula of Simple interest is (p*r*t)/100
    int pr = 10;
    int rate = 20;
    int time = 10;
    int si = (pr*rate*time)/100;
    printf("The Simple Intersest whith princepal as %d, rate as %d and time as %d is %d",pr,rate,time,si); 


    //The Program is Working Fine.

    return 0;
}