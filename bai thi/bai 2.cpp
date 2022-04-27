#include <stdio.h>
#include "daonguoc.h"
int main(){
	int n;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n<=0);
	int ary[n];
	nhapMang (ary,n);
	daoNguoc (ary,n);
}
