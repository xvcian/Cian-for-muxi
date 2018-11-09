#include<stdio.h>
void main()
{
    int n=1000;
    char jixv;
    do{
        printf("请输入一个数:");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("与%d相对应的字符是%c\n",i,i);
        }
        getchar();
        printf("你是否要继续:Y/N");
        scanf("%c",&jixv);

    }
    while(jixv=='Y');
    {
        printf("请输入一个数:");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("与%d对应的字符是%c\n",i,i);
        }
        printf("你是否要继续:Y/N");
        scanf("%c",&jixv);
    }
    return 0;
}
