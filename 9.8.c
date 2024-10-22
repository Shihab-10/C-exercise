#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
       int m;
    printf("enter the number :");
    scanf("%d",&m);
    int lcm;
    int gcd;
    for (int i =1;i<=n && i<=m;i++){
        if (n%i==0 && m%i==0){
            gcd = i;
        }
    }
    lcm = (n*m)/gcd;
    printf("lcm is %d",lcm);
}
