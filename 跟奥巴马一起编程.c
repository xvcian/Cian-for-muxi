#include <stdio.h>
int main()
{
    int N;
    char M;
    scanf("%d %c", &N, &M);
    for(int i = 0; i < (N + 1) / 2; i++)
    {
        for(int j = 0; j < N; j++)
        {
            putchar(i == 0 || i == (N - 1) / 2 || j == 0 || j == N - 1 ? M : ' ');
        }
        putchar('\n');
    }
    return 0;
}
