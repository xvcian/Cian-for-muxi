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
    printf("��������������:");
    scanf("%d%d",&m,&n);
    int gys(int a,int b);
    int i;
    i=gys(m,n);
    printf("%d��%d���������Ϊ��%d",m,n,i);
    return 0;
}

