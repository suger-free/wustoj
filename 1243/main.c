#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],i;
        for(i=n-1;i>=0;i--)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d",a[n-1]);
        printf("\n");
    }
}
