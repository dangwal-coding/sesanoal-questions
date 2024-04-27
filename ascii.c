#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    gets(name);
    for(int i=0;name[i]!='\0';i++){
        printf(" %d",name[i]);
    }
    return 0;
}
