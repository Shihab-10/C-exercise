#include<stdio.h>
int main(){
  char ch;
  printf("enter the character :");
  scanf("%c",&ch);
  char lc=ch+32;
  printf("%c",lc);
  return 0;
}