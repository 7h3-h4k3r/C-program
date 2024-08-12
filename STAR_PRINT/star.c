#include<stdio.h>
int main(){
    int num,n;
    printf("Enter a number :");
    scanf("%d",&num);
    n=num;
    for(int i =1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=(n*2-1);j++){
            printf("*");
        }--n;
        printf("\n");
    }
}