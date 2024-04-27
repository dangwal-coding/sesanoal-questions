#include <stdio.h>
#include <string.h>

int main() {
    char a[20]="hello ";
    char b[]="coder ";
    char c[]="python ";
    strcat(a,b);
    puts(a);
    strncat(c,b,3);
    puts(c);
    return 0;
}
