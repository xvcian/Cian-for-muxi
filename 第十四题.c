#include<stdio.h>
void main()
{
    int n,i=1;
    double a,b,c;

    scanf("%d",&n);

    while(i<=n){
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a+b>c)
            printf("Case#%d:true\n",i);
        else
            printf("Case#%d:false\n",i);
        i++;
    }
    return 0;
}
