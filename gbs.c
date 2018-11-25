#include<stdio.h>
int main(void)
{
    int m, n, k, i;
    printf("输入两个数:");
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
            printf(" %d 和 %d 的最小公倍数是: %d\n", m, n, i);
        }
}
