#include<stdio.h>
int main(void)
{
    int num;
    int c1,c2;
    int second,minute,hour;
    while(scanf("%d%d",&c1,&c2))
    {
        num=(c2-c1)/100;
        if((c2-c1)%100>=50)
            num=num+1;
         hour=num/3600;
         num-=hour*3600;
         minute=num/60;
         num-=minute*60;
         second=num;
     printf("%02d:%02d:%02d\n",hour,minute,second);
    }
    return 0;

}
