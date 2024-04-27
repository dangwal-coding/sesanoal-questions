#include  <stdio.h>
int main(){
    FILE *inputfile,*oddfile,*evenfile;
    int number;
    inputfile=fopen("input","r");
    if(inputfile==NULL){
        printf("error to file open");
        return 1;
    }
    oddfile=fopen("odd","w");
     if(oddfile==NULL){
        printf("error to file open");
        fclose(inputfile);
        return 1;
    }
    evenfile=fopen("even","w");
    if(evenfile==NULL){
        printf("error to file open");
        fclose(inputfile);
        fclose(oddfile);
        return 1;
    }
    while(fscanf(inputfile,"%d",&number)!=EOF){
        if(number%2==0){
            fprintf(evenfile,"%d\n",number);
        }else
        fprintf(oddfile,"%d\n",number);
    }
    printf("sucessfully written");
    fclose(inputfile);
    fclose(evenfile);
    fclose(oddfile);
return 0;
}