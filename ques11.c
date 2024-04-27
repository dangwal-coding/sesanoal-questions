#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *s;
    char *d;
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
    s=(char*)malloc(n*sizeof(char));
    d=(char*)malloc(n*sizeof(char));
    printf("enter string\n");
    scanf("%s",s);
    strcpy(d,s);
    printf("string is copy %s\n",d);
    free(s);
    free(d);
return 0;
}