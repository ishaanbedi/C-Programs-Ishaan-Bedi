// Write a program to perform the following operators on Strings without using String functions
// a. To find the length of the String.
// b. To concatenate two strings.
// c. To find the Reverse of a string,
// d. To copy one string to another string,

// a. To find the length of the String.
#include <stdio.h>
int getLen(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }
    return 1 + getLen(str + 1);
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int i, length = 0;
    printf("Length of %s is %d", str, getLen(str));
    return 0;
}