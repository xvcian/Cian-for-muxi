#include<stdio.h>
void main()
{
    int n=1000;
    char jixv;
    do{
        printf("������һ����:");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("��%d���Ӧ���ַ���%c\n",i,i);
        }
        getchar();
        printf("���Ƿ�Ҫ����:Y/N");
        scanf("%c",&jixv);

    }
    while(jixv=='Y');
    {
        printf("������һ����:");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("��%d��Ӧ���ַ���%c\n",i,i);
        }
        printf("���Ƿ�Ҫ����:Y/N");
        scanf("%c",&jixv);
    }
    return 0;
}
