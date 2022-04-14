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
    for (int i=n-1;i>=0;i--){
    	if(ary[i]%2!=0){
    		printf("so le cuoi cung cua mang la: %d\n",ary[i]);
    		break;
		}
	}
}
