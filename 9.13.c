#include<stdio.h>
int main(){
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  int r;
  printf("enter the number :");
  scanf("%d",&r);
  int nf=1;
  int rf=1;
  int ncr;
  int ncrf=1;
  for (int i=1;i<=n;i++){
    nf = nf*i;
  }
  for (int i=1;i<=r;i++){
    rf = rf*i;
  }
  for (int i=1;i<=n-r;i++){
    ncrf = ncrf*i;
  }
  ncr = nf/(rf*ncrf);
  printf("the number is %d",ncr);
}
