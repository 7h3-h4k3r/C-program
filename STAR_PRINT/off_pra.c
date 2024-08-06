#include<stdio.h>
int main(){
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    n = num;
    for(int  i =0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}