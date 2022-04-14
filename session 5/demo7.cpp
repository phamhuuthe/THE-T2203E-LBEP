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
    int min=0;
    for(int i=0;i<n;i++){
    	if(ary[i]>0){
    		min=ary[i];
    		break;
		}
	}
	if(min!=0){
		for(int i=0;i<n;i++){
			if(ary[i]>0 && ary[i]<min)
			min=ary[i];
		}
		printf("so duong nho nhat = %d\n",min);
	}else{
		printf("khong co so duong trong mang");
	}
}
