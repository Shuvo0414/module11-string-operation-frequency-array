#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];

    // take two string inputs
    scanf("%s%s", a, b);

    // loop through all characters of b
    // <= strlen(b) is important because it also copies '\0'
    for (int i = 0; i <= strlen(b); i++)
    {
        // copy each character from b to a
        a[i] = b[i];
    }

    printf("%s %s", a, b);

    return 0;
}