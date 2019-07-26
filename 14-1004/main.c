#include <stdio.h>
#include <stdlib.h>

struct student
{
    long no;
    char name[9];
    int score[4];
};

void input(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&s[i].no);
        scanf("%s",s[i].name);
        scanf("%d%d%d",&s[i].score[1],&s[i].score[2],&s[i].score[3]);
        s[i].score[0]=s[i].score[1]+s[i].score[2]+s[i].score[3];
    }
}

void sort(struct student *s,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(s[j].score[0]<s[j+1].score[0])
            {
                struct student t;
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
            else if(s[j].score[0]==s[j+1].score[0])
            {
                if(s[j].no>s[j+1].no)
                {
                    struct student t;
                    t=s[j];
                    s[j]=s[j+1];
                    s[j+1]=t;
                }
            }
        }
    }
}

void print(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d %.0ld %s %d %d %d %d\n",i+1,s[i].no,s[i].name,s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3]);
    }
}


int main()
{
    int n;
    struct student stu[100];
    while(scanf("%d",&n)!=EOF)
    {
        input(stu,n);   //读入n个学生的数据
        sort(stu,n);   //按照总分降序排序，如果总分相同的学号小的在前面
        print(stu,n);   //输出n个学生的信息
    }
    return 0;
}
