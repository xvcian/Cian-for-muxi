#include <stdio.h>
int  main(void)
{
    int i, j, k;

     puts("��ӡһ�������Ρ�");
    printf("�ױ�:");
    scanf("d%",&k);

    for(i=1; i<=k; i++){
       for(j=1;j<= i;j++)

        printf("*");


           putchar('\n');

    }
    return 0;
}
