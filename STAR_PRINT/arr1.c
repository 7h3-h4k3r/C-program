#include<stdio.h>
int main(){
    int i,j,k,l,num;
    printf("Enter  a num :");
    scanf("%d",&num);
    k=num;
    for(i=0;i<num-1;i++){
        for(j=0;j<k;j++){
            printf(" ");
        }
        for(j=0;j<k;j++){
            printf("*");
        }--k;
        printf("\n");
    }
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}