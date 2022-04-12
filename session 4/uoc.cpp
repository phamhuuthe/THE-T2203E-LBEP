#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int i=1;
	int s=0;
	for (i=1;i<=n;i++){
		if(n%i==0){
			printf("cac uoc cua n la %d\n",i);
			s=s+i;
		}			
	}
		printf("tong cac uoc cua n = %d",s);	
}
