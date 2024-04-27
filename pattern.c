#include  <stdio.h>
#include<conio.h>
int main(){
    int rows=7;
 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows-i;j++){
        printf(" %d",i+1);
    }
    printf("\n");
   }
return 0;
}