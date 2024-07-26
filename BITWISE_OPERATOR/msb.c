#include<stdio.h>
#define BITS sizeof(int)*8
int main(){
    int NUM ,MSB;
    printf("enter a numbet:");
    scanf("%d",&NUM);
    MSB = 1 << (BITS-1); //1000 0000 0000 0000 0000 0000 0000 0000
    printf("USER input : %d\n",NUM);
    printf("MSB Set :");
    for(int i = BITS -1;i>=0;i--){
        printf("%d",(MSB >> i) &1);
    }
    printf("\n");
    if(NUM & MSB){
        printf("MSB AS set(1) %d",NUM);
    }else{
        printf("MSB AS set (0) %d",NUM);

    }
    
}