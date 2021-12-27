#include <stdio.h>

int main()
{
    float h, b, c, s;

    scanf("%f %f %f %f", &h, &b, &c, &s);
    float storage = h * b * c * s / (8 * 1024 * 1024);

    printf("%.1f MB", storage);

    return 0;
}