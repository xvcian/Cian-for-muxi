#include<stdio.h>

int m;
int b,g,s;
int main()
{
    scanf("%d",&m);
    g=m%10;
    m=m/10;
    s=m%10;
    b=m/10;
    printf("%d %d %d",b,s,g);
}
