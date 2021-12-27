#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[10000];  
    
    for (int i=1 ; i<=n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j=n ; j>0 ; j--)
    {
        printf("%d ", arr[j] );
    }

    return 0;
}