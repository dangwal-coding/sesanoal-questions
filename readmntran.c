#include  <stdio.h>
#include<conio.h>
int main(){
    int m,n,i,j;
    printf("enter rows and column \n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("enter the matrix elements\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("result\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
return 0;
}