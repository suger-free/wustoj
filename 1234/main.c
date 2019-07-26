#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int i,j;
        for(i=1;i<=t;i++)
        {
        int a[2000]={0};
        int n,k;
        scanf("%d %d",&n,&k);
        int ans,count=0,dead=0,t=1;
        while(dead<=n)
        {
            if(a[t]==0)
            {
                count++;
            }
            if(count==k)
            {
                count=0;
                a[t]=1;
                dead++;
            }
            if(t>n)
            {
                t=1;
            }
            if(dead==(n-1))
            {
                for(j=1;j<=n;j++)
                {
                    if(a[j]==0)
                    {
                        ans=j;
                    }
                }
                break;
            }
            t++;
        }
        printf("%d\n",ans);
        }
    }
}
