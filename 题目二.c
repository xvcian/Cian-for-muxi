#include <stdio.h>
int main(void)
{
    int a,b;

    puts("���������Ƴɼ���");
    printf("��Ŀ1:");  scanf("%d",&a);
    printf("��Ŀ2:");  scanf("%d",&b);

    if(a>100||a<0||b>100||b<0)
        puts("it is error");
        else
        {


    switch(a/10){
    case 10 :
    case 9  :
    case 8  :
    case 7  :
    case 6  : puts ("it is pass.");
    switch(b/10){
    case 10 :
    case 9  :
    case 8  :
    case 7  :
    case 6  : puts("it is pass.");
              break;
              default  : puts("it is not pass");

   }
        }
}
       return 0;
}
