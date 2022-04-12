#include<stdio.h>
#include<math.h>
int main(){
	int n,i,s;
	do{
	printf("nhap n = ");
	scanf("%d",&n);
	}
	while(n<0);
	i=n;
	do{
		s=i%10;
	}while(i/=10);
	printf("chu so dau tien cua n la: %d ",s);
}
