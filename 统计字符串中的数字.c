#include<stdio.h>
int main(void)
{
    char ch;
    while((ch=getchar())!='\n'){
    for(int i=0;i<100;){
    if(ch>='0'&&ch<='9')
        i++;
        printf("���ַ��������ָ���Ϊ%d\n",i);
    }
}
    return 0;
}
