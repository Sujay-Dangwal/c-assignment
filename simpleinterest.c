#include<stdio.h>
int main(){
    float p,r,t;
    printf("enter principal amount:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time");
    scanf("%f",&t);
    printf("Simple Interest is:%f",p*r*t/100);

    return 0;



}