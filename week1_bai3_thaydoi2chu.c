#include<stdio.h>
#include<string.h>
int nhap(){
    char a[100];
    char b,c,d;
    printf("nhap mang: \n");
    fflush(stdin);
    gets(a);
    printf("nhap chu  bi thay: \n");
    scanf("%s",&b);
    printf("nhap chu thay: \n");
    scanf("%s",&c);
    d=strlen(a);
    for(int i=0;i<d;i++){
        if(a[i]==b){
            a[i]=c;
        }
    }
    printf("mang sau khi thay: %s ",a);
}
int main(){
    nhap();
}