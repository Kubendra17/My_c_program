# include<stdio.h>
int main(){
int row,col,i,j;
printf("Enter the rows and column of the matrix ");
scanf("%d%d",&row,&col);
int a[i][j],b[i][j],s[i][j];
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("Enter the value of matrix A");
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("Enter the value of matrix B");
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        s[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("The output of matrix is \n");
        printf("%d",&s[i][j]);
    }
}
return 0 ;
}
