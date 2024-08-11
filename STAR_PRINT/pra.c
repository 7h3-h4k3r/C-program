#include<stdio.h>
int main(){
    int i,j,num,n,k;
    printf("Enter a no:");
    scanf("%d",&num);
    n=num;
    // k=num+num;
    for(i=0;i<num;i++){
            for(j=0;j<n;j++){
                printf(" ");
            }for(j=0;j<=i;j++){
                printf(" *");  
            }--n;
        printf("\n");
    }
}