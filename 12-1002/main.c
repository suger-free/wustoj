#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int c=b%a;
        if(c==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
