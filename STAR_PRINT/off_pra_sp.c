#include<stdio.h>
int main(){
    int i,k,j,num;
    printf("Enter a numbe:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            if(i==0||j==0||i==j||i==num-1||j == (num+i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
}