#include  <stdio.h>
#include<conio.h>
int main(){
    int count=0;
    char a[100],character;
    printf("Enter the string : ");
    gets(a);
    printf("enter the character to count \n");
    scanf("%c",&character);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==character){
            count++;
        }
    }    
    printf("%c is found in %d times in line",character,count);
return 0;
}