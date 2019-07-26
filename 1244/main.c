#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=k;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        for(i=0;i<k-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[k-1]);
    }
}
