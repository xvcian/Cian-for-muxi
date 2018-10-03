#include <stdio.h>
int  main(void)
{
    int i, j, k;

     puts("打印一个三角形。");
    printf("底边:");
    scanf("d%",&k);

    for(i=1; i<=k; i++){
       for(j=1;j<= i;j++)

        printf("*");


           putchar('\n');

    }
    return 0;
}
