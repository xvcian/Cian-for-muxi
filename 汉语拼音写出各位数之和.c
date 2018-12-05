#include<stdio.h>
int main(void)
{
    char num[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char array[100];
        int sum=0,i=0,j;
        int index[5];
            for(i=0;i<5;i++)
                index[i]=-1;
            scanf("%s",array);
            i=0;
            while(array[i]!='\0'){
                    sum+=array[i]-'0';
                    i++;
                    }
                    j=0;
                    while(sum>0){
                            index[j]=sum%10;
                            sum=sum/10;
                            j++;
                            }
                            for(i=5-1;i>=0;i--){
                                    if(index[i]!=-1){
                                        if(i==0)
                                        printf("%s",numchar[index[i]]);
                            else
                                printf("%s ",numchar[index[i]]);
                                                    }
                            }
                            return 0;
}



