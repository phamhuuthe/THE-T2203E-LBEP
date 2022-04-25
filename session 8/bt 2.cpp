#include <stdio.h>
int timMax(int *p,int n){
	int max = p[0];
	for(int i=0;i<n;i++){
		if(max < p[i]){
			max =p[i];
		}
	}
	return max;
}
bool checkSNT(int n){
	if(n<2) return false;
	if(n<4) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int SNTMax(int *p,int n){
	int m = timMax(p,n);
	for(int i=m+1; ;i++){
		if(checkSNT(i))
			return i;
	}
}

int main(){
	int arr[5] = {5,1,-5,-1,-3};
	int snt = SNTMax(arr,5);
	printf("So can tim: %d",snt);
}
