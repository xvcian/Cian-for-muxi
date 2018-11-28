#include<stdio.h>
int main (void)
{
    int n;
    int a[1005];
    int i;
    a[1]=0;
    a[2]=2;
    a[3]=2;
    for(i=4;i<=1000;i++)
        a[i]=(a[i-1]+a[i-2]*2)%10000;
    while(scanf("%d",&n),n)/*头一次看见这种表达式。意思就是当输入一个整型，且这个整型的数不是0时，条件成立，否则，若输入0，则跳过while里面的内容*/
        {
            printf("%d\n",a[n]);

        }
        return 0;

}
