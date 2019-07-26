#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        double a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&a[i]);
        }
        int b[5]={0};
        for(i=0;i<n;i++)
        {
            if(a[i]<=1)
                b[0]++;
            else if(a[i]>1&&a[i]<=2)
                b[1]++;
            else if(a[i]>2&&a[i]<=3)
                b[2]++;
            else if(a[i]>3&&a[i]<=10)
                b[3]++;
            else
                b[4]++;
        }
        for(i=4;i>=0;i--)
        {
            printf("%d\n",b[i]);
        }
    }
}
