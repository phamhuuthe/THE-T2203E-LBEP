#include<stdio.h>
int main(){
	int a,b;
	do{
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
}
	while(a<=0||b<=0);
	int x=a;
	int y=b;
	while(a!=b){
		if(a>b)
		a-=b;
		else
		b-=a;
	}
	printf("uoc chung lon nhat la: %d\n",a);
	printf("boi chung nho nhat la: %d",(x*y/a));
}
