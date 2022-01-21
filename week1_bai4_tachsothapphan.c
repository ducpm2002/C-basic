	#include<stdio.h>
int nhap(double n, int *int_n, double *frac_n){
    *int_n = (int)n;
    *frac_n = n -(int)n;
    printf("%d , %f",*int_n,*frac_n);
}
int main(){
    double n=12.34;
    int nguyen;
    double frac;
    nhap(n,&nguyen,&frac);
}
