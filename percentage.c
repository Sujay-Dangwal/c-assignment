#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5,sum=0;
    printf("enter marks of first subject:");
    scanf("%f",&s1);
    printf("enter marks of second subject:");
    scanf("%f",&s2);
    printf("enter marks of third subject:");
    scanf("%f",&s3);
    printf("enter marks of fourth subject:");
    scanf("%f",&s4);
    printf("enter marks of fifth subject:");
    scanf("%f",&s5);
    sum=s1+s2+s3+s4+s5;
    printf("Percentage of five subjects is:%f",sum/500*100);


    return 0;



}