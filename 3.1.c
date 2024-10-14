#include<stdio.h>
int main(){
  int a;
  printf("enter the number :");
  scanf("%d",&a);
  if(a<0){
    a=a*(-1);
    printf("the number is : %d",a);
  }
}