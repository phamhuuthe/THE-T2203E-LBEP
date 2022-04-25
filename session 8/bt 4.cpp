#include <stdio.h>
int timBCNN(int *p,int n){
	int m = p[0]>0?p[0]:-p[0];
	for(int i=m;;i++){
		bool f= true;
		for(int j=0;j<n;j++){
			if(i%p[j]!=0){
				f = false;
				break;
			}
		}
		if(f){
			return i;
		}
	}
}

int main(){
	int arr[5] = {-10,30,10,-90,-40};
	int bcnn = timBCNN(arr,5);
	printf("BCNN: %d",bcnn);
}
