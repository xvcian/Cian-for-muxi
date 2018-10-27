# include<stdio.h>
int main(void)
{
int a[]={31,29,31,30,31,30,31,31,30,31,30,31},p,sum=0,n,i=0,d;
p=a;
printf("请你输入月份1-12\n");
scanf("%d",&n);
printf("请你输入%d月份的第几天\n");
scanf("%d",&d);
while(i<n-1)
{p++;
sum=sum+p;
i++;
}
sum=sum+d;
printf("%d月%d号属于该年第%d天\n",n,d,sum);
return 0;
}
