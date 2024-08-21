#include<stdio.h>
int main(){
    int i,k,j,num;
    printf("Enter a  number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }printf("\n");

    }
    k=num;
    for(i=1;i<num;i++){
    for(j=1;j<k;j++){
        printf("*");
    }--k;
    printf("\n");
    }
}