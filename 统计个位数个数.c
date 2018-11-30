#include<stdio.h>
#include<string.h>
int main(void){
    int i,j,n;
    char a[1000],b = '0';
    scanf("%s",a);
    i = strlen(a);
    while(b <= '9')
    {
        n=0;
        for(j = 0;j < i;j++)
        {
            if(a[j] == b)
                n++;
        }
        if(n!=0)
            printf("%c:%d\n",b,n);
            b+=1;
    }
    return 0;

}
