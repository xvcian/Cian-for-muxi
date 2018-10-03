#include <stdio.h>
int main()
{
    float a,b,c;
    printf("请输入三个实数:\n");
    scanf("%d&d&d",&a,&b,&c);

    if(a+b<=c||b+c<=a||a+c<=b)
        printf("0\n");
    else if(a==b&&b==c)
        printf("1\n");
    else if(a==b||b==c||a==c)
        printf("2\n");
    else ;
        printf("3\n");

return 0;
}
