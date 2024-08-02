#include<stdio.h>
int main(){
    int num,n, bitset;
    printf("Enter you number :");
    scanf("%d",&num);
    printf("Enter set bit index of the number :0-31 :");
    scanf("%d",&n);
    bitset = (1<<n) | num;
    printf("%d",bitset);

}