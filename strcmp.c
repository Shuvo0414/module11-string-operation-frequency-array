#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];

    scanf("%s %s", a, b);

    // strcmp compares strings lexicographically
    // stores comparison result in v
    int v = strcmp(a, b);

    // if result is negative,
    // then A is smaller
    if (v < 0)
    {
        printf("A is smaller\n");
    }

    // if result is positive,
    // then B is smaller
    else if (v > 0)
    {
        printf("B is smaller\n");
    }

    // otherwise both strings are same
    else
    {
        printf("Same\n");
    }

    return 0;
}