// C program to find the first capital letter
// in a string using recursion

#include <stdio.h>
#include <string.h>

char checkCap(char *str)
{
    static int i = 0;
    if (i < strlen(str))
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            return str[i];
        }
        else
        {
            i = i + 1;
            return checkCap(str);
        }
    }
    else
        return 0;
}

int main()
{
    char str[64];
    char cap;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    cap = checkCap(str);

    if (cap == 0)
        printf("Capital letter not found.");
    else
        printf("First capital letter: %c\n", cap);

    return 0;
}
