#include<stdio.h>
int main(){
    int a,i=1,prod;
    printf("enter number of multiples for table:");
    scanf("%d",&a);
    printf("enter number whose multiplication table is needed:");
    scanf("%d",&prod);
    for(i=1;i<=a;i++)
   {
     printf("%d X %d = %d \n",prod,i,prod*i);
   }
   

   

   
    return 0;


}