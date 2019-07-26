#include <stdio.h>
#include <stdlib.h>

struct student
{
    long no;
    char name[9];
    int score;

};

void input(struct student *s,int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&s[i].no);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].score);
    }
}

int delet(struct student *s,int n,long xh)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        if(s[i].no==xh)
        {
            for(j=i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
            return 1;
        }
    }
    return -1;
}

void print(struct student *s,int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        printf("%ld %s %d\n",s[i].no,s[i].name,s[i].score);
    }
}

int main()
{
    int i,n,m,t;
    long xh;
    struct student stu[100];
    while(scanf("%d",&n)!=EOF)
    {
        input(stu,n);   //读入n个学生的数据
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%ld",&xh);
            t=delet(stu,n,xh);  //删除学号为xh的学生，删除不成功返回-1，删除成功则返回1
            if(t==-1)
                printf("delete Failed\n",xh);
            else
            {
                n--;
                printf("delete Success\n");
            }
        }
        print(stu,n);   //输出n个学生的信息
    }
    return 0;
}
