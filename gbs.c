#include<stdio.h>
int main(void)
{
    int m, n, k, i;
    printf("����������:");
    scanf("%d%d", &m, &n);
    if(m<n)
    {
        k = m;
        m = n;
        n = k;
    }
    for(i=m; i>0; i++)
        if(i%m == 0 && i%n == 0)
        {
            printf(" %d �� %d ����С��������: %d\n", m, n, i);
        }
}
