#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num & 1){
        printf("LSB  is set (1) %d \n",num);
    }else{
        printf("LSB is set(0) %d \n",num);
    }
}