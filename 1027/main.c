#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    //int i;
    double sum=0;
    int a=2,b=1;
    sum+=1.0*a/b;
    for(int i=1;i<n;i++)
    {
        int t=a;
        a=a+b;
        b=t;
        sum+=1.0*a/b;
    }
    printf("%.2f\n",sum);
    return 0;
}
