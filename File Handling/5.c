// Write a C Program to Count Lines, Blank Lines, and Comments in a File
#include <stdio.h>
int main()
{
    int lineCount = 0;
    int blankCounter = 0;
    int commentCounter = 0;
    FILE *filep;
    char ch;
    char *file = "file.txt";
    filep = fopen(file, "r");
    while ((ch = fgetc(filep)) != EOF)
    {
        if (ch == '\n')
        {
            lineCount++;
        }
        if (ch == '\n')
        {
            if ((ch = fgetc(filep)) == '\n')
            {
                fseek(filep, -1, 1);
                blankCounter++;
            }
        }
    }
    fseek(filep, 0, 0);
    while ((ch = fgetc(filep)) != EOF)
    {
        if (ch == '/')
        {
            if ((ch = fgetc(filep)) == '/')
            {
                commentCounter++;
            }
        }
    }
    printf("Total no. of lines: %d\n", lineCount+1);
    printf("Total no. of blank lines: %d\n", blankCounter);
    printf("Total no. of comments: %d\n", commentCounter);

    return 0;
}