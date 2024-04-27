#include  <stdio.h>
#include<conio.h>
int main(){
    int n,i,pos,first,search,last,middle,a[30];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter searching element\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if(a[middle]<search){
            first=middle+1;
        }
        else if(a[middle]==search){
            printf("element is found %d",middle);
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last){
        printf("element is not in list\n");
    }
return 0;
}