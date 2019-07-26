#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        double sum=0;
        int now=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>now)
            {
                sum=sum+6*(a[i]-now);
                sum=sum+5;
                now=a[i];
            }
            else if(a[i]==now)
            {
                sum=sum+5;
                now=a[i];
            }
            else
            {
                sum=sum+4*(now-a[i]);
                sum=sum+5;
                now=a[i];
            }
        }
        printf("%.0lf\n",sum);
    }
}
