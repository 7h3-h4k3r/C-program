#include<stdio.h>
int main(){
    int num,n,i,k,j;
    printf("Enter your number :");
    scanf("%d",&num);
    n = num;
    for(i =0;i<=n;i++){
        for( j=0;j<=num;j++){
            printf(" ");
        }
        for(k=0;k<=n;k++){
            if(k==0||i==0||k==n||i==n||k == (n+i-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }--num;
        printf("\n");
    }
}