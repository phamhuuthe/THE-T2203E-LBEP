//nhap 1 chuoi tu ban phim,dem so lan NA (e,u,a,o,i)xuat hien trong chuoi.
#include<stdio.h>
#include<string.h>
int main (){
	char s[20];
	printf("chuoi :");
	scanf("%s",s);
	int NA=0;
	for(int i=0;i<20;i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o')
		NA++;
	}
	printf("so lan nguyen am xuat hien trong chuoi = %d",NA);
}
     
