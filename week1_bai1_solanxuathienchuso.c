#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("\ninput: ");
	fflush(stdin);
	gets(a);
	int k[58]={0};
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='z'){
			k[a[i]-65]++;
		}
	}
	for(int j=0;j<58;j++){
		if(k[j]!=0){
			printf("chu %c xuat hien %d lan\n",j+65,k[j]);
		}
	}
}	
