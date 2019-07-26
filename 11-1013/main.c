#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int sum=n+m;
        double a[sum];
        int b[sum];
        int i,j,k;
        for(i=0;i<sum;i++)
        {
            scanf("%lf %d",&a[i],&b[i]);
        }
        for(i=1;i<sum;i++)
        {
            for(j=0;j<sum-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                    double t1=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t1;
                }
            }
        }
        for(i=0;i<sum;i++)
        {
            printf("%.0lf %d\n",a[i],b[i]);
        }

    }
}
