#include <stdio.h>

int main() {
    int num,n,i,j;
    printf("Enter  a number :");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        
        }
        for(int k=0;k<=num;k++){
            printf("*");
        }printf("\n");
    }
}
