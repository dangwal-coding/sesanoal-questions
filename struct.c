#include  <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char father_name[20]; 
    int age;
    char city[30];
};
int main(){
    struct student list[100];
    //input student details
    for(int i=0;i<2;i++){
        printf("student roll no.\n");
        scanf("%d",&list[i].roll_no);
        printf("student name\n");
        scanf("%s",list[i].name);
        printf("student father name\n");
        scanf("%s",list[i].father_name);
        printf("student age\n");
        scanf("%d",&list[i].age);
        printf("student city\n");
        scanf("%s",list[i].city);
    }
      for(int i=0;i<2;i++){
        printf("student roll no. %d",list[i].roll_no);
        printf("student name %s",list[i].name);
        printf("student Father Name %s",list[i].father_name);
        printf("student age %d",list[i].age);
        printf("student city %s",list[i].city);
        printf("\n");
    }
return 0;
}