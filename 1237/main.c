#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t,i;
    long long index[40]={1};
    for(i=1;i<40;i++)
    {
        index[i]=index[i-1]*8;
    }
    scanf("%d",&t);
    while(t--)
    {
        char a[50];
        scanf("%s",&a);
        int l=strlen(a);
        long long sum=0;
        int l1=l;
        //printf("%d ",a[i]-'0');

        for(i=0;i<l;i++)
        {
            sum=sum+(a[i]-'0')*index[l1-1];
            //printf("%d ",sum);
            l1--;

        }
        //char b[100]=(char)sum;
        printf("%lld\n",sum);
    }
}
