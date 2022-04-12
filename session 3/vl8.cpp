//nhap 1 so nguyen n, tim so lon nhat nho hon n va chia het cho ca 2 va 3.

#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	for(int i=n-1;i<=0;i--){
		if(i%2==0&&i%3==0)
			printf("%d",i);
	}
	
	}
	
