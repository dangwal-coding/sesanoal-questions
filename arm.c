#include  <stdio.h>
#include<conio.h>
int main(){
    int c,n,arm=0,r;
    printf("enter any no.");
    scanf("%d",&n);
    c=n;
   while(n>0){
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
   }
   if(c==arm){
    printf("number is arm");
   }
   else
   printf("not arm");
return 0;
}