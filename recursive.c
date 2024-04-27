#include  <stdio.h>
int m1(int n){
       if(n<=1)
       return 1;
       else
       return n*m1(n-1);
    }
int main(){
   int n,f;
   printf("enter no.");
   scanf("%d",&n);
   f=m1(n);
   printf("%d",f);
return 0;
}