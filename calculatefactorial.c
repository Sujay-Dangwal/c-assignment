#include<stdio.h>
int main(){
    int a,b=0,fact=1;
    printf("enter number:");
    scanf("%d",&a);
    while(b<a){
    b=b+1;
    fact=fact*b;
    }
    printf("factorial of number is:%d",fact);

   

   
    return 0;


}