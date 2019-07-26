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
        char max[1000]="11";

        for(i=0;i<n;i++)
        {
            int l=strlen(max);
            if(strlen(a[i])>l)
            {
                strcpy(max,a[i]);
            }
        }
        printf("%s\n",max);
    }
}
