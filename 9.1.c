#include<stdio.h>
int main(){
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  int  p =1;
  for (int i=1;i<=n;++i){
    p=p*i;
  }
  printf ("the factorial of the number is %d",p);
  
  return 0;
}
