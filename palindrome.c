#include<stdio.h>
int main()
{  int n, i, r, rev=0;

printf("enter a number:");
scanf("%d",&n);
i=n;
while(i>0){
    r=i%10 ; 
    rev=rev*10+r;
    i=i/10;

}
if(n==rev)
{
printf("number %d is palidrome",n);
}
else{
    printf("it is not palindrome");
}
return 0;


}