#include <stdio.h>
#include <stdlib.h>

struct student
{
    long no;
    char name[9];
    int score[25];
    int yes;
};

void read(struct student *s,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&s[i].no);
        scanf("%s",&s[i].name);
        for(j=0;j<m;j++)
        {
            scanf("%d",&s[i].score[j]);
        }
        s[i].yes=1;
    }
}

int solved(struct student *s,int n,int m,int *result)
{
    int i,j,k,z=0;
    double sum=0,ave;
    for(i=0;i<m;i++)//iΪ�ڼ��ο���
    {
        for(j=0;j<n;j++)//jΪ�ڼ�����
        {
            sum=sum+s[j].score[i];
            //printf("%lf\n",sum);
        }//���һ����û�����
        ave=sum/n;
        //printf("%lf\n",ave);
        for(k=0;k<n;k++)//kҲΪ�ڼ�����
        {
            if(s[k].score[i]<ave)
            {
                s[k].yes=0;
            }
        }
        sum=0;
    }
    for(i=0;i<n;i++)
    {
        if(s[i].yes==1)
        {
            result[z]=i;
            z++;
        }
    }
    return z;
}

void write(struct student *s,int t,int m,int *result)
{
    printf("num=%d\n",t);
    int i,j,k;
    for(i=0;i<t;i++)
    {
        printf("%ld %s ",s[result[i]].no,s[result[i]].name);
        for(j=0;j<m-1;j++)
        {
            printf("%d ",s[result[i]].score[j]);
        }
        printf("%d\n",s[result[i]].score[m-1]);
    }
}
int main()
{
    int n,m,result[100],t;
    struct student stu[100];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        read(stu,n,m);   //����n��ѧ��������
        t=solved(stu,n,m,result);   //���ɼ��ȶ���ѧ����Ŵ浽����result�У����سɼ��ȶ���ѧ������
        write(stu,t,m,result);   //���t���ɼ��ȶ���ѧ������Ϣ
    }
    return 0;
}
