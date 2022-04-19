//nhap mang n so nguyen.sap xep cac so le theo thu tu tang dan.cac so khac giu nguyen vi tri
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
    for(int i=0; i<n; i++)
    {
	 scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    	if(a[i]%2!=0){
    		for(int j=i+1;j<n;j++){
    			if(a[j]%2!=0 && a[i]>a[j]){
    				int tmp =a[j];
    				a[j]=a[i];
    				a[i]=tmp;
				}
			}
		}	
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
