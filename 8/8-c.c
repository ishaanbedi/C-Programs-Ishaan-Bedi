// Write a program to perform the following operators on Strings without using String functions
// a. To find the length of the String.
// b. To concatenate two strings.
// c. To find the Reverse of a string,
// d. To copy one string to another string,

//  c. To find the Reverse of a string,
#include <stdio.h>
#include <string.h>
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
    char str[20];
    char rev[20];
    int i, length;
    printf("Enter the string : ");
    scanf("%s", str);
    length = getLen(str);
    printf("Reverse String :");
    for (i = getLen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}