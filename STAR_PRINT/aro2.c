#include<stdio.h>
int main(){
    int j,i,k,num;
    printf("Enter a number :");
    scanf("%d",&num);
    k = num;
    for(i=1;i<=num;i++){
        for(j=1;j<k;j++){
         printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        --k;

        printf("\n");
    }
    k=num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
        printf(" ");
        }
        for(j=1;j<k;j++){
            printf("*");
        }
        --k;

    int num,j,k,i;
    char data[10]={"hello"};
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("%s",&data[i]);
        printf("\n");
    }
}