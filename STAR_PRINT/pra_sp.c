#include<stdio.h>
int main(){
    int num,j,i;
    printf("Enter your no:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=i;j<=num;j++){
            printf(" ");
        }
        for(j=1;j<=(i*2-1);j++){
            if(i==1||j==1||j==(i*2-1)||i==num){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}