#include<stdio.h>
int main(){
    int num,n,clear_bit;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a bit of index :");
    scanf("%d",&n);
    clear_bit = num&(~(1<<n));
    printf("%d",clear_bit);
}