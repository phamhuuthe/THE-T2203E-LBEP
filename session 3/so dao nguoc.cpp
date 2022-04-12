#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int t=0;
	for(;n!=0;n/=10){
		
		t=t*10+n%10;
	}
	
	
	printf("so dao nguoc: %d\n",t);
}
