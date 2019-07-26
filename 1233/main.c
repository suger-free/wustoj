#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,j,k;
        int a[10][10];
        for(i=0;i<10;i++)
        {
            a[i][0]=1;
            a[i][i]=1;
        }
        for(i=2;i<10;i++)
        {
            for(j=1;j<i;j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        for(i=0;i<n;i++){
        for(k=0;k<(n*2)-2-2*i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
            {
                if(j!=i)
                {
                printf("%3d ",a[i][j]);
                }
                else
                {
                    printf("%3d",a[i][j]);
                }
            }
            printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
    }
    printf("\n");
}
    }

