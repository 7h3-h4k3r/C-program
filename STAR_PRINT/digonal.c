#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(j==2 && i==1 || i==2 && j!=0  && j!=2 && j!=4 || i==3 && j==2)
            printf(" ");
        else
            printf("*");
        
        }printf("\n");
    }

}