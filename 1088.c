#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        continue;
        printf("%d ", i); //n이 아니라 i란다... 제발 생각좀해
    }

    return 0;
}