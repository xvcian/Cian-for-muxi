# include<stdio.h>
int main(void)
{
int a[]={31,29,31,30,31,30,31,31,30,31,30,31},p,sum=0,n,i=0,d;
p=a;
printf("���������·�1-12\n");
scanf("%d",&n);
printf("��������%d�·ݵĵڼ���\n");
scanf("%d",&d);
while(i<n-1)
{p++;
sum=sum+p;
i++;
}
sum=sum+d;
printf("%d��%d�����ڸ����%d��\n",n,d,sum);
return 0;
}
