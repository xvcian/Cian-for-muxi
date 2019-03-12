#include<stdio.h>
#include<math.h>

int a,b,c;
int h;
double ans1,ans2;
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    h=b*b-4*a*c;
    ans1=(-b+sqrt(h))/2*a;
    ans2=(-b-sqrt(h))/2*a;
    printf("%lf %lf",ans1,ans2);
}
