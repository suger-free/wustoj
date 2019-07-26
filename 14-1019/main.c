#include <stdio.h>
#include <stdlib.h>

struct student
{
    long no;
    char name[9];
    int score;
    //int yes;
};

void input(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&s[i].no);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].score);
        //s[i].yes=1;
    }
}

int search(struct student *s,int n)
{
    int i,j,k;
    long sum=0,ave;
    for(i=0;i<n;i++)
    {
        sum=sum+s[i].score;
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
        if(s[i].score<ave)
        {
            return i;
        }
    }
    return 0;
}

void print(struct student *s,int n,int t)
{
    int i,j;
    printf("%d\n",n-t);
    for(i=t;i<n;i++)
    {
        printf("%ld %s %d\n",s[i].no,s[i].name,s[i].score);
    }
}

int main()
{
    int n,t;
    struct student stu[100];
    while(scanf("%d",&n)!=EOF)
    {
        input(stu,n);   //����n��ѧ��������
        t=search(stu,n); //���ص�һ���Ϻ��ȵ�ѧ�������±�
        print(stu,n,t);  //������±�t��ʼ�����һ��ѧ������Ϣ
    }
    return 0;
}
