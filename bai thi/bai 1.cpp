#include<stdio.h>
int main(){
	int n;
	float S;
	S = 0;
	do{
		printf("nhap vao so n = ");
		scanf("%d",&n);
		if(n<1){
			printf("n khong hop le");
		}
	}while(n<1);
	for(int i=1;i<=n;i++){
		 S = S + 1.0/i;
	}
	
	printf("tong 1 + 1/2 + ...+1/%d = %f",n,S);
}
