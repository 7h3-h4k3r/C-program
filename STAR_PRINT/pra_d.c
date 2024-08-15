#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("Enter a number :");
    scanf("%d",&num);
    k=num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=(k*2-1);j++){
            if(i==1||j==1||j==(k*2-1)){
            printf("*");
            }
            else{
                printf(" ");
            }
        }--k;
        printf("\n");
    }
}