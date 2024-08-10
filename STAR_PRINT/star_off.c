#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("Enter  a number :");
    scanf("%d",&num);
    k=num;
    for(i=0;i<num;i++){
        for(j=0;j<k;j++){
            if(i==0||j==0||j==k-1){
            printf("*");
            }else{
                printf(" ");
            }
        }--k;
        printf("\n");
    }
}