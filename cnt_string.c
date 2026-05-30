#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // int zero = 0, one = 0, two = 0, three = 0;

    // frequency array (stores count of each number)
    // size 8 because values are assumed in range 0-7
    int cnt[8] = {0};

    // count frequency of each value in array
    for (int i = 0; i < n; i++)
    {
        /* if (a[i] == 0)
         {
             zero++;
         }
         if (a[i] == 1)
         {
             one++;
         }
         if (a[i] == 2)
         {
             two++;
         }
         if (a[i] == 3)
         {
             three++;
         }
         */

        // a[i] gives the value
        // that value is used as index of cnt array
        cnt[a[i]]++;
    }

    // print frequency of values 0 to 6
    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }

    // printf("0 - %d\n", zero);
    // printf("1 - %d\n", one);
    // printf("2 - %d\n", two);
    // printf("3 - %d\n", three);

    /*
    input : 7
            0 1 0 3 4 3 7

    output:
    0 - 2
    1 - 1
    2 - 0
    3 - 2
    4 - 1
    5 - 0
    6 - 0

    */

    return 0;
}