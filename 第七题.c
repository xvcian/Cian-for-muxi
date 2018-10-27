#include<stdio.h>
int main()
{
    int n,m,x,y;
    while(scanf("%d",&n))
    {


        x=1;
        for(m=0;m<n;m++)

    {
        scanf("%d",&y);
        if(y%2==1)
        x=x*y;
    }
    printf("%d\n",x);
    }
    return 0;
}
