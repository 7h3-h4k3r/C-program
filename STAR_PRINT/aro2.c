#include<stdio.h>
int main(){
    int num,j,k,i;
    char data[10]={"hello"};
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("%s",&data[i]);
        printf("\n");
    }
}