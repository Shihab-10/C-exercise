#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter the first number :");
  scanf("%d",&a);
  printf("enter the second number :");
  scanf("%d",&b);
  printf("enter the third number :");
  scanf("%d",&c);
  if(a<b && a<c){
    printf("the smallest  number is %d",a);
  }
  else if(b<a && b<c){
    printf("the smallest number is %d",b);
  }
  else {
    printf("the smallest  number is %d",c);
  }
  return 0;
}