#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
        printf("%d %d %d %d %d %d\n",f,a,b,c,d,e);
        printf("%d %d %d %d %d %d\n",e,f,a,b,c,d);
        printf("%d %d %d %d %d %d\n",d,e,f,a,b,c);
        printf("%d %d %d %d %d %d\n",c,d,e,f,a,b);
        printf("%d %d %d %d %d %d\n",b,c,d,e,f,a);
        printf("\n");
    }
}
