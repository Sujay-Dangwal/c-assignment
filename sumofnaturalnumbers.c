#include<stdio.h>
int main(){
    int a,i=0,sum=0;
    printf("enter number of natural numbers to sum:");
    scanf("%d",&a);
    while(i<a)
   {
    i=i+1;
    sum=sum+i;
   }
    printf("sum of numbers is:%d",sum);
   

   

   
    return 0;


}