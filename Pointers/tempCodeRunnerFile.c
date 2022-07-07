#include <stdio.h>

int main()
{
    int n = 5;
    int *ptr = &n;
    if (ptr == NULL)
    {
        printf("pointer is  NULL at this point of time in execution\n");
    }
    else
    {
        printf("pointer is  NOT NULL at this point of time in execution\n");
    }
    ptr = 0;
    if (ptr == NULL)
    {
        printf("pointer is  NULL at this point of time in execution\n");
    }
    else
    {
        printf("pointer is  NOT NULL at this point of time in execution\n");
    }

    return 0;
}
