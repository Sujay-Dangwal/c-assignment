#include<stdio.h>
int main()
{  int n, i, r, rev=0;

printf("enter a number:");
scanf("%d",&n);
for(i=n; r=n%10 ; n=n/10)
{
    rev=rev*10+r;

}
printf("%d",rev);
return 0;


}