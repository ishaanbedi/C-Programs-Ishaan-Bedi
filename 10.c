// Write a program to count the no of Lowercase, Uppercase numbers and special Characters present in the contents of a text file.
#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    int lCounter = 0;
    int uCounter = 0;
    int sCounter = 0;
    fp = fopen("file.txt", "r");
    c = fgetc(fp);
    while (c != EOF)
    {
        if (c > 64 && c < 91)
        {
            uCounter++;
        }

        else if (c > 97 && c < 122)
        {
            lCounter++;
        }
        else
        {
            sCounter++;
        }
        c = fgetc(fp);
    }

    fclose(fp);
    printf("Lower Counter: %d\n", lCounter);
    printf("Upper Counter: %d\n", uCounter);
    printf("Special Counter: %d\n", sCounter - 1);
}
