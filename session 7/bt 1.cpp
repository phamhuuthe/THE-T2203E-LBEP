//nhap vao 1 mang n chu,sap xep mang theo thu tu anphabet
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("nhap n chuoi = ");
	scanf("%d",&n);
	char arrs[n][50];
	printf("nhap chuoi:\n");
	for(int i=0;i<n;i++){
		scanf("%s",arrs[i]);
	}
	
	for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if(strcmp(arrs[j],arrs[j+1])>0){
			char tmp[50];
			strcpy(tmp,arrs[j]);  //<=> strcpy(tmp=arrs[j])
			strcpy(arrs[j],arrs[j+1]);
			strcpy(arrs[j+1],tmp);
			}
		}
		
	}
	printf("sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%s\n",arrs[i]);
	}

}
