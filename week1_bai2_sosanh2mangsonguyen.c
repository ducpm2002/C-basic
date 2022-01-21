#include<stdio.h>
#include<string.h>
int nhap(){
    int a[5],b[5];
    int i=0,j=0;
    int c,d,k,m=0;
    for(i=0;i<5;i++){
        printf("nhap so hang thu %d cua mang 1: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("mang 1: ");
    for(int c=0;c<5;c++){
        printf(" %d ",a[c]);
    }
    printf("\n");
    for(j=0;j<5;j++){
        printf("nhap so hang thu %d cua mang 2: ",j+1);
        scanf("%d",&b[j]);
    }
    printf("mang 2: ");
    for(int d=0;d<5;d++){
        printf(" %d ",b[d]);
    }
    for(k=0;k<5;k++){
        if(a[k]==b[k]){
            m++;
        }
    }
    if(m==5){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    if(nhap()==0){
        printf("2 mang khac nhau");
    }
    else{
        printf(" 2 mang bang nhau");
    }
   
}