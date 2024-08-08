#include<stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int k=0;k<=num;k++){
            if(i==0||k==0||k==num||i==num||k==(num+i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
}