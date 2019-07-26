#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        double money=(a+b+c)/n;
        printf("%.2lf\n",money);
    }
}
