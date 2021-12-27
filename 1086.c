#include <stdio.h>

int main()
{
    float w, h, b, stg;

    scanf("%f %f %f", &w, &h, &b); 
    stg = w * h * b / (8 * 1024 * 1024);
    printf("%.2f MB", stg);

    return 0;
}