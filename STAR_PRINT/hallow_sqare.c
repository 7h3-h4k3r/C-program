#include<stdio.h>
int main(){
for(int j=0;j<5;j++){
    for(int i=0;i<5;i++){
        if(j!=0 && j<=3 && i!=0 && i<=3){
                printf(" ");
            }
            else{
                printf("*");
            }
        }printf("\n");
    }
}
