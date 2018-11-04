#include<stdio.h>
int main()
{

    int n,m,i,j,k;
    scanf("d%d%",&n,&m);
    int xsacj[100][1000];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("d%",& xsacj[i][j]);

/*定义了一个二维数组，表示学生人数和课程数*/
    for(i=0;i<n;i++){
            k=0;
            int xspj[100];
    for(j=0;j<m;j++){
        k+=xsacj[i][j];
        int xspj[i]=k/m;
       printf("%.2lf",xspj[i]);
       if(i<n-1) printf(" ");
    }/*求每个学生的平均成绩*/

    }
    printf("\n");
    for(j=0;j<m;j++){
        k=0;
        int kpj[100];
        for(i=0;i<n;i++){
            k+=xsacj[i][j];
            int kpj[j]=k/n;
            printf("%.2lf",kpj[j]);
            if(j<m-1) printf(" ");
        }/*求每门课的平均成绩*/

    }
     printf("\n");
     int x,sum;
     for(i=0;i<n;i++){
        x=1;
        int kpj[100];
        int kpj[j]=k/n;
        for(j=0;j<m;j++){
            if(xsacj[i][j]<kpj[j]) {x=0;break;}

            }
            if(x) sum++;

        printf("%d\n",sum);
     }
     return 0;
}


