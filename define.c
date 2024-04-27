#include  <stdio.h>
#define Arr(x,y)\
for(int i=0;i<y;i++)\
printf(" %d",x[i]);\
printf("\n");
int main(){
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    Arr(a,size);
return 0;
}
