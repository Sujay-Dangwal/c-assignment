#include<stdio.h>
int main()
{  int n, i, r, count=0;

printf("enter a number:");
scanf("%d",&n);
i=n;
while(i>0){
    r=i%10 ; 
    count=count+1;
    i=i/10;

}

printf("number of digits are:%d",count);

return 0;


}