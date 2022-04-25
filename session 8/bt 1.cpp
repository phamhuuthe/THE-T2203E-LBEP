#include<stdio.h>
int luyThua(int x, int y){
	int s=1;
	while(x--){
		s=s*y;
	}
return s;
}
int main(){
	int x,y,z;
	printf("nhap vao so: ");
	scanf("%d",&x);
	printf("nhap vao so mu: ");
	scanf("%d",&y);
	z=luyThua(x,y);
	printf("%d^%d = %d",x,y,z);
}
