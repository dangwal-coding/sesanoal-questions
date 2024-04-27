#include  <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char fathername[40]; 
    int age;
    int marks;
    char city[30];
};
int main(){
    struct student list[100];
    // input students numbers
    int n;
    printf("no of students\n");
    scanf("%d",&n);
    //input student details
    for(int i=0;i<n;i++){
        printf("student roll no.\n");
        scanf("%d",&list[i].roll_no);
        printf("student name\n");
        scanf("%s",list[i].name);
        printf("student father name\n");
        scanf("%s",list[i].fathername);
        printf("student age\n");
        scanf("%d",&list[i].age);
         printf("student marks\n");
        scanf("%d",&list[i].marks);
        printf("student city\n");
        scanf("%s",list[i].city);
    }
      for(int i=0;i<n;i++){
        printf("student roll no. %d\n",list[i].roll_no);
        printf("student name %s\n",list[i].name);
        printf("student Father Name %s\n",list[i].fathername);
        printf("student age %d\n",list[i].age);
        printf("student marks %d\n",list[i].marks);
        printf("student city %s\n",list[i].city);
        printf("\n");
    }
return 0;
}