#include<stdio.h>
int main(){
    int i,j,k,l,num;
    printf("Enter  a name :");
    scanf("%d",&num);
    l=k=num;
    for(i=1;i<num+(num-1);i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }++i;
        for(j=1;j<=k;j++){
        printf("*");
        }--k;printf("\n");
    }
    for(i=1;i<=num;i++){
        for(j=1;j<l+l;j++){
            printf(" ");
        }--l;
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}