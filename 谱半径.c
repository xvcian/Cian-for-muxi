#include <stdio.h>
int main()
{
    int m, n, k, s = 0;
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
        {
            scanf("%d %d", &n, &k);
            if(n * n + k * k > s)
                s = n * n + k * k;
        }
    printf("%.2lf", sqrt(s));
    return 0;
}
