#include<stdio.h>
int main(){
  int n;
  printf("enter the decimal number :");
  scanf("%d",&n);
  int hx=0;
  int r;
  int p=1;
  while (n!=0){
    r = n%16;
    n = n/16;
    hx = hx + (r *p);
    p = p*10;
  }
  printf("the hexadecimal number is %x",hx);
  return 0;
}
