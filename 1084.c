#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    for (int i = 0; i < a;i++)
    {
        for (int p = 0; p < b; p++)
        {
            for (int q = 0; q < c; q++)
                printf("%d %d %d\n", i, p, q);

        }
    }
    printf("%d", a * b * c);

    return 0;
}
