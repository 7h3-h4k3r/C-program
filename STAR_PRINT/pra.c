#include<stdio.h>
int main(){
    int i,j,num;
    printf("Enter a no:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
            for(j=i;j<=num;j++){
                printf(" ");
            }for(j=1;j<=(i*2-1);j++){
                printf("*");  
            }
        printf("\n");
    }
}