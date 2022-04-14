//nhap vao 1 mang n so nguyen,sau do nhap 1 so x.xem x co trong mang.
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int ary[n];
    for(int i=0; i<n; i++)
    {
	 scanf("%d",&ary[i]);
    }
    int x;
    printf("nhap x=");
    scanf("%d",&x);
    int d=0;
    for(int i=0;i<n;i++){
    	if(x==ary[i])
    	d++;
    }
    if(d==0){
    	printf("x khong co trong mang");
	}else{
		printf("x co trong mang");
		}
}
