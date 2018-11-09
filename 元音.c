#include<stdio.h>
#include<string.h>
void main()
{

    char YY[100];
    int m;
    int number1,number2,number3,number4,number5;
    scanf("%d",&m);
    getchar();
    while(scanf("%d",&m)!=EOF)
    {
        for(int j=1;j<=m;j++)
        {
            gets(YY);
            int len=strlen(YY);
            number1=0;number2=0;number3=0;number4=0;number5=0;
            for(int i=0;i<len;i++)
            {
                if(YY[i]=='a') number1++;
                else if(YY[i]=='e') number2++;
                else if(YY[i]=='i') number3++;
                else if(YY[i]=='o') number4++;
                else if(YY[i]=='u') number5++;
            }
            printf("a:%d\n",number1);
            printf("e:%d\n",number2);
            printf("i:%d\n",number3);
            printf("o:%d\n",number4);
            printf("u:%d\n",number5);
            if(j!=m)
                printf("\n");
        }
    }
    return 0;

}
