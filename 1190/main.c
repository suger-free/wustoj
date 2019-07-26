#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    char b[100];

    while(scanf("%s %s",&a,&b)!=EOF) {

        if(strcmp(a, b) == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
