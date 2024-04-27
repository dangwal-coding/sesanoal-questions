#include  <stdio.h>
int main(){
    int a[10][10],b[10][10],i,j,k,result[10][10];
    printf("enter the matrix \n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for (j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=0;
            for(k=0;k<3;k++){
               result[i][j]+=a[i][k]*a[j][k];
            }
        }
    }
     for(i=0;i<3;i++){
        for (j=0;j<3;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
return 0;
}