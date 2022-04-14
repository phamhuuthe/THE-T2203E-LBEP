//tinh trung binh cong cac so le trong mang n so.
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
	int s=0;
    int c=0;
    
    for(int i=0;i<n;i++){
    	if(ary[i]%2!=0){
    		s=(s+ary[i]);
    		c++;
		} 
	}
		printf("tbc = %f",(float)s/c);
}
