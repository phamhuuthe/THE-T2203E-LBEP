#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int x0=0,x1=1,x2=1;
	for(;x1+x2<n;){
				x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	printf("so caan tim: %d\n",x2);
}
