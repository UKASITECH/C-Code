#include <stdio.h>

int main()
{
    /* Q.Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.*/

    float sub1, sub2, sub3;

    // Input marks
    printf("Enter marks of Subject 1 (out of 100): ");
    scanf("%f", &sub1);
    printf("Enter marks of Subject 2 (out of 100): ");
    scanf("%f", &sub2);
    printf("Enter marks of Subject 3 (out of 100): ");
    scanf("%f", &sub3);

    // Check for individual subject pass (>=33%)
    if (sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("You have failed because you scored less than 33%% in a subject.\n");
    }
    else
    {
        // Calculate total and percentage
        float total = sub1 + sub2 + sub3;
        float percentage = total / 3;

        if (percentage >= 40)
        {
            printf("Congratulations! You passed with %.2f%%.\n", percentage);
        }
        else
        {
            printf("You have failed because your overall percentage is %.2f%% (less than 40%%).\n", percentage);
        }
    }
    /* Q. Calculate income tax paid by an employee to the government as per the slabs
         mentioned below:
         Income Slab Tax
         2.5 – 5.0L 5%
         5.0L - 10.0L 20%
         Above 10.0L 30%
         Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

    int salalry;
    printf("Enter your Salary: ");
    scanf("%d",&salalry);
    
    if (salalry <= 250000)
    {
        printf("You do not have to give taxes");
    } else if(salalry >= 250000 && salalry <= 500000){
        printf("You have to give 5%% of your salary");
    }
    else if (salalry <= 1000000)
    {
        printf("You have to give 20%% of your salary");
    }
    else if (salalry > 1000000)
    {
        printf("You have to give 30%% of your salary");
    }
    
    else
    {
        printf("Enter a correct input....");
    }
    
    // Q. Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
    int year;
    printf("Enter a Year : ");
    scanf("%d", &year);
    if ((year/4) == 0)
    {
        printf("The Year is a Leap Year");
    }
    else{
        printf("This year is not a leap year");
    }
    return 0;
}