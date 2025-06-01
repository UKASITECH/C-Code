#include <stdio.h>

int main()
{
    // Strings - 1d character array terminateed by a null character('\0')
    // null character is usd to denote the termibnation of string. characters are stored contingious memory locations

    // initialising strings
    char s[] = {'U', 'M', 'A', 'N', 'G', '\0'};
    // or
    char t[] = "UMANG";

    // Q. Create a string using double quotes and print its content using loop
    char st[] = "UMANG";
    for (char i = 0; i < 5; i++)
    {
        printf("%c\n", s[i]);
    }

    // printing entire string
    printf("%s", st); // %s for strings

    char name[10];
    printf("\nEnter the value:\n");
    scanf("%s", name);
    printf("%s", name);

    // gets and puts
    char str[30];
    gets(str);  // gets are used to take multiword string
    puts(name); // puts used to output a string

    // declare a string using pointers
    char *ptr = "umang";
    return 0;
}