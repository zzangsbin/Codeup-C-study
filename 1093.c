#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);

    int a[23] = { 0 };
    
    for (int i = 1; i <= n; i++) //i<n이 아니라 등호포함
    {
        int t;
        scanf("%d", &t);
        a[t] = a[t] + 1;
    }

    for (int j = 1; j <= 23; j++) //여기도 등호포함..
    {
        printf("%d ", a[j]);
    }

    return 0;

}