#include<stdio.h>
int main(){
    int num,n,neWnum;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Enter a toggle number :");
    scanf("%d",&n);
    neWnum = num ^ (1<<n);
    printf("%d",neWnum);
}