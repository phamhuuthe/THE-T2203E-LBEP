#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("nhap vao so:");
	scanf("%d",&a);
	if(a==8){
		printf("day la chu nhat");
	}else{
		if(a>1 && a<8){
			printf("day la thu %d",a);
		}else{
			printf("day khong phai la ngay trong tuan");
		}
	}
}
