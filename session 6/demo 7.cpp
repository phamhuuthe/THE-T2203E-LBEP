//cho mang 1 chieu n so nguyen.tim doan (a,b)sao cho doan nay chua tat ca cac gia tri trong mang
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
    for(int i=0; i<n; i++)
    {
	 scanf("%d",&arr[i]);
    }
    //tm a -tim min
    //tim b- tim max
    int a =arr[0];
    int b =arr[0];
    for(int i=1;i<n;i++){
    	if( arr[i]>b){
    		b=arr[i];
		}
		if(arr[i]<a){
			a=arr[i];
		}
	}
	printf(" doan can tim la [%d,%d]",a,b);
}
