#include<stdio.h>
#include<math.h>
int main(){
int i,j,k,l;
int num;
printf("Enter a no:");
scanf("%d",&num);
k = num + (num-1);
l = floor(k/2);
  for(i=0;i<k;i++){
    for(j=0;j<k;j++){
      if(i==l || j==l){
        printf("*");
      }
      else
      {
        printf(" ");
      }
    } printf("\n");
  } 
}

