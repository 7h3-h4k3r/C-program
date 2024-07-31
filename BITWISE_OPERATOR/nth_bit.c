#include<stdio.h>
typedef struct 
{
    int n,num,bit_state;
    int (*nth_bit_staus)(struct nth_bit*);
}nth_bit; 

int check(nth_bit *p){
    if(p->bit_state == 0){
        printf("%d bit set as (0)",p->n);
    }else{
        printf("%d bit set as (1)",p->n);
    }
}

void __init__(nth_bit *P,int bit_st){
    P->bit_state = bit_st;
    P->nth_bit_staus = check;

}
int main(){
    nth_bit main;
    int bit_Status;
    printf("Enter a numbet :");
    scanf("%d",&main.num);
    printf("Your number [DEBUG] address %p ,and  binary state %d",&main.num,main.num);
    printf("Enter a nth  bit : no(1-31) ");
    scanf("%d",&main.n);
    bit_Status = (main.num >> main.n) & 1;
    __init__(&main,bit_Status);
    main.nth_bit_staus(&main);
}