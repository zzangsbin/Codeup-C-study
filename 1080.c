#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;

    scanf("%d", &i);

    for (n = 1; sum < i; n++)
        sum = sum + n;

    printf("%d", n-1);

    return 0;
}