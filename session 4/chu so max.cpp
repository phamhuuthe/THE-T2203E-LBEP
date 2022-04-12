#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	int max;
	do{
	printf("nhap n = ");
	scanf("%d",&n);
	}
	while(n<0);
	if (n==0){
		max=0;
	}
	do{
		i=n%10;
		if(i>max){
			max=i;
		}
	}while(n/=10);
	printf("chu so lon nhat cua n la : %d",max);
}
