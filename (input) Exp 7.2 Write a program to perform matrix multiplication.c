//title of program
//program to perform matrix multiplication
//header file
#include<stdio.h>
//main function heading
void main()
{
//varaiable(array) declaration for performing multiplication
int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
//input statement from user for matrix1
printf("\n Enter the first matrix:");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//input statement from user for matrix1
printf("Enter elements mat1[%d][%d]",i,j);
scanf("%d",&mat1[i][j]);
}
}
//input statement from user for matrix2
printf("\n Enter the second matrix:");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//input statement from user for matrix2
printf("Enter elements mat2[%d][%d]",i,j);
scanf("%d",&mat2[i][j]);
}
}
//output statement for printing first matrix
printf("Print the first matrix\n ");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statement for matrix1
printf("%d\t", mat1[i][j]);
}
printf("\n");
}
//input statement from user for matrix2
printf("Print the second matrix\n");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statement for matrix2
printf("%d\t", mat2[i][j]);
}
printf("\n");
}
//output statement for matrix multiplication
printf("Matrix Multiplication");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//assignment of value
mat3[i][j]=0;
//for loop statement for storing valued obtained after performing multiplication
for(k=0;k<3;k++)
{
//statement for performing multiplication
mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
}
}
}
//output statement for printing third matrix obtained by  performing multiplication of two matrices
printf("\n The Third Matrix is:");
printf("Print the third / Multiplication Matrix\n");
//nested loop statement
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statements for printing matrix3
printf("%d\t",mat3[i][j]);
}
printf("\n");
}
}
