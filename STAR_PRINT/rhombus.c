#include<stdio.h>
int main(){
    int num;
    int n; 
    printf("Enter  your name :");
    scanf("%d",&num);
    n = num;
    for(int i=0;i<n;i++){
        for(int j=0;j<num;j++){
            printf("*");
        } --num;
        
        printf("\n");
    }
}