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
        input(stu,n);   //����n��ѧ��������
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%ld",&xh);
            t=delet(stu,n,xh);  //ɾ��ѧ��Ϊxh��ѧ����ɾ�����ɹ�����-1��ɾ���ɹ��򷵻�1
            if(t==-1)
                printf("delete Failed\n",xh);
            else
            {
                n--;
                printf("delete Success\n");
            }
        }
        print(stu,n);   //���n��ѧ������Ϣ
    }
    return 0;
}
