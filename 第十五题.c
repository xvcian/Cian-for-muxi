
#include<stdio.h>

#include<string.h>

int main()

{

    int n,i,k,x[105],min;

    while(scanf("%d",&n),n)

    {

        memset(x,0,sizeof(x));

        scanf("%d",&x[0]);

        min=0;

        for(i=1;i<n;++i)

        {

            scanf("%d",&x[i]);

            if(x[i]<x[min])

            {

                min=i;

            }

        }

        k=x[0];x[0]=x[min];x[min]=k;

        printf("%d",x[0]);

        for(i=1;i<n;++i)

        {

            printf(" %d",x[i]);

        }

        printf("\n");

    }

    return 0;

}
