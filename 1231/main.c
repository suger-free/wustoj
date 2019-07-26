#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        char s[100],c;
        scanf("%s %c",&s,&c);
        int i;
        for(i=0;s[i];i++)
        {
            if(s[i]!=c)
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
}
