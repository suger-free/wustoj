#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[10000],b[10000];
    while(scanf("%s%s",&a,&b)!=EOF)
    {
        int l1=strlen(a),l2=strlen(b);
        int i,j,flag=0;
        if(l1>l2)
        {
            flag=1;
        }
        else if(l1<l2)
        {
           flag=-1;
        }
        else
        {
            for(i=0,j=0;i<l1&&j<l2;i++,j++)
            {
                if(a[i]>b[j])
                {
                    flag=1;
                    break;
                }
                else if(a[i]<b[j])
                {
                    flag=-1;
                    break;
                }
            }
        }
        printf("%d\n",flag);
    }
}
