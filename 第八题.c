#include<stdio.h>
int main(void)
{


int n;
int m,j,k,a[n],sum,p;
printf("请输入n个评委的打分。%d\n");
scanf("%d",&n);
for(m=0;m<n;m++)
{
    scanf("%d",&a[n]);

}

 for(m=0;m<n;m++){
        for(j=0;j<n-m;j++){
            if(a[j]>a[j+1]){
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;

            }
        }
 }

for(m=0;m<n;m++){
printf("%d\n",a[n]);
for(m=1;m<n-1;m++){
sum=sum+a[n];
}
p=sum/(n-2);
printf("平均分为%d分\n",p);
    return(0);
}
}

