#include<stdio.h>
void nhapMang (int ary[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap mang:");
		scanf("%d",&ary[i]);
	}
	return;
}
void daoNguoc(int ary[],int n){
	for(int i=n-1;i>=0;i--){
		printf("mang dao nguoc:%d\n",ary[i]);
	}
	return;
}
