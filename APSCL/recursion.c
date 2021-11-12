#include <stdio.h>
#include <stdlib.h>

int recursion(int x)
{
    int static y = 0;
    if(x < 0) {
        return 1;
    }

    y = x + y;
    printf("%d\n", y);
    return recursion(x-2) + recursion(x - 3);
}

int main()
{
    int x;
    scanf("%d", &x);
    int ans = recursion(x);
    printf("%d\n", ans);
    return 0;
}


/*
Output:
5
8
9
9
11
11
7
*/
