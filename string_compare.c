#include <stdio.h>

int main()
{
    // declare two string arrays
    char a[100], b[100];

    // take two string inputs
    scanf("%s %s", a, b);

    // start comparing from first index
    int i = 0;

    // infinite loop because we don't know
    // where strings may become different
    while (1)
    {
        // if both strings end together
        // then both strings are same
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }

        // if A ends first,
        // then A is smaller
        else if (a[i] == '\0')
        {
            printf("A choto\n");
            break;
        }

        // if B ends first,
        // then B is smaller
        else if (b[i] == '\0')
        {
            printf("B choto\n");
            break;
        }

        // if current characters are same
        // move to next index
        if (a[i] == b[i])
        {
            i++;
        }

        // if ASCII value of A is smaller
        // then A is lexicographically smaller
        else if (a[i] < b[i])
        {
            printf("A choto\n");
            break;
        }

        // otherwise B is smaller
        else
        {
            printf("B choto\n");
            break;
        }
    }

    return 0;
}