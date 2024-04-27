#include  <stdio.h>
int main(){
    FILE *p;
    p=fopen("input","w");
    if(p==NULL){
        printf("file opeing error");
        return 1;
    }
    for(int i=0;i<=1000;i++){
        fprintf(p,"%d\n",i);
    }
    printf("written sucessfully");
    fclose(p);
return 0;
}