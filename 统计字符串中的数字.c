#include<stdio.h>
int main(void)
{
    char ch;
    while((ch=getchar())!='\n'){
    for(int i=0;i<100;){
    if(ch>='0'&&ch<='9')
        i++;
        printf("该字符串的数字个数为%d\n",i);
    }
}
    return 0;
}
