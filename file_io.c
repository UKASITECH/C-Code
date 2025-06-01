#include <stdio.h>

int main()
{
    // file I/O is file input and output - it is used to communicate with files through c lang
    // we can input text, crate a file and write data in them or extracting data from a text file is file io

    // file pointer - a file is a strucuture which need to b created for opening the file.
    FILE *ptr;
    ptr = fopen("Umang,txt", "r");

    // file opening moods in c
    /*
    "r" -> open for reading
    "rb" -> open for reading in binary
    "w" -> open for writing // If the file exists, the contents will be
    overwritten
    "wb" -> open for writing in binary
    "a" -> open for append // If the file does not exist, it will be created
    */

    // there are 2 types of file - text files(.txt, .c) and binary files(.jpeg, .dat)

    // reading a file
    int num;
    fscanf(ptr, "%d", &num); // used to read a integer frm the fikle name
    
    // closing the file
    fclose(ptr);

    // write to a file
    FILE *FPTR;
    FPTR = fopen("UMANG.TXT", "w");
    int numb = 434;
    fprintf(FPTR, "%d", numb);
    fclose(FPTR);

    // ggetc() and fputc() - they are used to read and write a character from / to a file
    fgetc(ptr); // read a character from file
    fputc('c', ptr); // uused to write a character to a file

    // EOF - end of file - fgetc return eof when all the characters from the file has been readen and we want to detect the end of file.
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF){
            break;
        }
    }
    
 
    
    return 0;
}