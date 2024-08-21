#include<stdio.h>
int main(){
    int num, alter_num;
    int i,j,k;
    printf("Enter  a number : ");
    scanf("%d",&num);
    alter_num = num;
    for(i=1;i<=num;i++){
        for(j=1;j<=alter_num;j++){
            printf("*");
        }
        for(k=1;k<(i*2-1);k++){
            printf(" ");
        }
        for(j=1;j<=alter_num;j++){
            printf("*");
        }--alter_num;
        printf("\n");
    }
    alter_num=num;
    for(i=1;i<num;i++){
        for(j=1;j<=i+1;j++){
            printf("*");
        }
        for(j=1;j<(alter_num*2-3);j++){
            printf(" ");
        }
        for(j=1;j<=i+1;j++){
            printf("*");
        }
        --alter_num;
        printf("\n");
    }
}