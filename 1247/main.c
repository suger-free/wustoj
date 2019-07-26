#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,t;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(k==1)
        {
            for(i=1;i<n;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                    }
                }
            }
        }
        if(k==2)
        {
            for(i=1;i<n;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]<a[j+1])
                    {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                    }
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-1]);
    }
}
