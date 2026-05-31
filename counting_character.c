#include <stdio.h>
#include <string.h>

int main()
{

    char s[100];
    scanf("%s", s);

    // frequency array for 26 lowercase letters (a-z)
    int cnt[26] = {0};

    // STEP 1: count frequency of each character
    // convert character to index using (s[i] - 'a')
    for (int i = 0; i < strlen(s); i++)
    {
        cnt[s[i] - 'a']++;
    }

    /*
    =====================================================
    2ND WAY:
    Print frequency in ALPHABETICAL order (a to z)
    a - 3
    b - 1
    c - 1
    d - 1
    e - 1
    z - 1
    =====================================================
    */

    /*
    for (int i = 0; i < 26; i++)
    {

        // 1st way to print. // printf("%c - %d\n", i + 'a', cnt[i]);

        // i + 'a' converts index back to character

        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }
    */

    /*
    =====================================================
    3RD WAY:
    Print frequency in INPUT ORDER (first appearance order)
    =====================================================
    */

    for (int i = 0; i < strlen(s); i++)
    {
        // convert current character to index
        int value = s[i] - 'a';

        // if this character is not already printed
        if (cnt[value] != 0)
        {
            // print character and its frequency
            printf("%c - %d\n", value + 'a', cnt[value]);

            // mark as printed so it won't repeat
            cnt[value] = 0;
        }
    }

    /*

    input: abcadeaz

    output :
    a - 3
    b - 1
    c - 1
    d - 1
    e - 1
    z - 1
    */

    return 0;
}