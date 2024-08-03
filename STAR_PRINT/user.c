#include<stdio.h>
int main(){
    int num,n;
    printf("Enter a number :");
    scanf("%d",&num);
    for(int i =1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1 || i==num || j==1 || j==num || j==i || j==(num -i +1)){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}