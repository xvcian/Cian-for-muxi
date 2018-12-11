#include<stdio.h>
int main(){
	int num,n,i,j,k;
	scanf("%d",&num);
	if(num>=100){
		n=num/100;
		for(i=0;i<n;i++){
		printf("B");}
		num-=n*100;
	}
	if(num<100&&num>=10){
		n=num/10;
		for(i=0;i<n;i++){
		printf("S");}
		num-=n*10;
	}
	if(num<10){
		for(i=1;i<num+1;i++)
		printf("%d",i);
	}
	return 0;
}
