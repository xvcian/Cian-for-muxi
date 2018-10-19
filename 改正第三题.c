#include<stdio.h>
int main()
{
    char c;
    int N;
    int n;
    scanf("%d %c",&N,&c);
    if(N<7)
        n=1;
    else
    {
        for(int i=1;i<N;i++)
        {
            if(2*i*i-1>N)
            {
                n=i-1;
                break;
            }
        }
    }

int res=N-(2*n*n-1);
for(int i=n;i>0;i--)
{
    for(int k=i;k<n;k++);
    {
        printf(" ");
    }

for(int j=2*i-1;j>0;j--)
{
    printf("%c",c);
}
printf("\n");
}
for(int i=0;i<n-i;i++)
{
    for(int j=i;j<n-2;j++)
    {
        printf("*");
    }
    for(int k=0;k<2*(i+2)-1;k++)
    {
        printf("%c",c);
    }
    printf("\n");
}

printf("%d\n",res);

return 0;
}
