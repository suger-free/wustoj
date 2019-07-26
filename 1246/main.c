#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        char a[n][1000];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%s",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(strcmp(a[j],a[j+1])>0)
                {
                    char t[1000];
                    strcpy(t,a[j]);
                    strcpy(a[j],a[j+1]);
                    strcpy(a[j+1],t);
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%s\n",a[i]);
        }
    }
}
