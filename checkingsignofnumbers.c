#include<stdio.h>
int main(){
    float a;
    printf("enter number:");
    scanf("%f",&a);
    if(a>0){
        printf("number is positive");
    }
    else if(a<0){
        printf("number is negative");
    }
    else{
        printf("number is neither negative nor positive it is 0");
    }

    return 0;




}