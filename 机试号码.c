#include<stdio.h>
int num[1001][1001];
int main(void)
{
    int N,M,i,j,k,d;
    char str[1001][15];
    int sum[1000];
    scanf("%d",&N);
    for(i=1;i<=N;i++){
            scanf("%s%d",str[i],&d);
    for(j=1;j<=N;j++)
        if(j==d)
        scanf("%d",&num[i][j]);
    }
    scanf("%d",&M);
    for(i=1;i<=M;i++){
            scanf("%d",&sum[i]);

  }
  for(i=1;i<=M;i++){
        for(j=1;j<=N;j++){
            if(num[j][sum[i]]!=0){
                k=j;
  break;
  }
  }
  printf("%s ",str[k]);
  printf("%d\n",num[k][sum[i]]);
}
return 0;
}
