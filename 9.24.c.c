#include<stdio.h>
int main(){
    int n,a;
    printf("enter the number :");
    scanf("%d",&n);
    printf("all the prime numbers of %d are :",n);
    for (int i=2;i<=n;i++){
        a=0;
        for (int j=2;j <=i/ 2;j++){
            if (i % j == 0){
                a=1;
                break;
            }
        }
        if (a==0) printf ("%d ",i) ;
    }
    printf ("\n");
    return 0;
}