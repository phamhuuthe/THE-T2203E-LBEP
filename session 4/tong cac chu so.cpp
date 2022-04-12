#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
	printf("nhap n = ");
	scanf("%d",&n);
	}
	while(n<0); 

	int s=0;
	int i=n;
	while(i!=0){
		s=s+i%10;
		i=i/10;
	}
	printf("tong cac chu so cua n = %d",s);
}
