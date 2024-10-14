#include<stdio.h>
int main(){
  int a;
  printf("enter the first  number :");
  scanf("%d",&a);
  int b;
  printf("enter the second number :");
  scanf("%d",&b);
  if (a<b){
    printf("%d is smaller",a);
  }
    if (b<a){
    printf("%d is smaller",b);
  }
  return 0;
}