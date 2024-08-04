#include<stdio.h>
int main(){
    int j,i,k,n,an;
    printf("Enter a number:");
    scanf("%d",&n);
    an = n;
    for(i=0;i<n;i++){
        for(j=0;j<an;j++){
            printf(" ");
        }
        for(k=0;k<n;k++){
            printf("*");
        }
        --an;
        printf("\n");
    }
}