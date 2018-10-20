#include<stdio.h>
int gys(int a,int b)
{
    int c;
    do{
        c=a%b;
        a=b;
        b=c;
    }while(b);
    return a;
}
int main()
{
    int m; int n;
    printf("输入两个正整数:");
    scanf("%d%d",&m,&n);
    int gys(int a,int b);
    int i;
    i=gys(m,n);
    printf("%d和%d的最大公因数为：%d",m,n,i);
    return 0;
}

