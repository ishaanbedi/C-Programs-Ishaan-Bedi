// Write a program to perform the following operators on Strings without using String functions
// a. To find the length of the String.
// b. To concatenate two strings.
// c. To find the Reverse of a string,
// d. To copy one string to another string,

// d. To copy one string to another string,
#include <stdio.h>
int main()
{
    char str1[100], str2[100], i;
    printf("Enter the first string: ");
    scanf("%s", str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String copied successfully to the second string!!\n");
    printf("Copied String: %s", str2);
    return 0;
}
