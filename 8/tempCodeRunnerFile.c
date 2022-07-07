// b. To concatenate two strings.
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
    char s1[1000], s2[1000];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    j = getLen(s1);

    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i + j] = s2[i];
    }
    s1[i + j] = '\0';

    printf("Concatenated strings: %s", s1);

    return 0;
}