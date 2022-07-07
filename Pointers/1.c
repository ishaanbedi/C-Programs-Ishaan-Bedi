#include <stdio.h>
#include <string.h>
void change(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void permutation(char *cht, int stno, int endno)
{
    int i;
    if (stno == endno)
        printf("%s  ", cht);
    else
    {
        for (i = stno; i <= endno; i++)
        {
            change((cht + stno), (cht + i));
            permutation(cht, stno + 1, endno);
            change((cht + stno), (cht + i));
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", &str);
    int n = strlen(str);
    printf(" Permutations of the string are : \n");
    permutation(str, 0, n - 1);
    return 0;
}
