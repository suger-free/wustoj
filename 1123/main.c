#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	if(a<=6)
	printf("yes\n");
	else if(b<=2)
	printf("yes\n");
	else if(a<=20&&b<5)
	printf("yes\n");
	else
	printf("no\n");
}
