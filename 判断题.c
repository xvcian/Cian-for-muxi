#include<stdio.h>
int main(){
    int n,i,j,m,sum;
    scanf("%d %d",&n,&m);
    int fs[m];   // 题目的分数
    int da[m];  // 正确答案
    int xs[m];  // 学生的答案
    int jg[n];    // 学生的成绩
    for(i=0;i<m;i++){
        scanf("%d ",&fs[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d ",&da[i]);
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            scanf("%d",&xs[j]);
            if(xs[j]==da[j]){
                sum+=fs[j];
            }
        }
        jg[i]=sum;
    }
    for(i=0;i<n;i++){
        printf("%d\n",jg[i]);
    }
    return 0;
}
