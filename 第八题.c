#include<stdio.h>
int main(void)
{


int n;
int m,j,k,a[n],sum,p;
printf("������n����ί�Ĵ�֡�%d\n");
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
printf("ƽ����Ϊ%d��\n",p);
    return(0);
}
}

