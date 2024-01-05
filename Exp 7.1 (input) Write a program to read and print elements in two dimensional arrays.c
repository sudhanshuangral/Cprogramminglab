//title of program
//program to read and print elements in two dimensional arrays
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable(array) declaration
int a[3][3];
//initializing values
int i,j;
//nested loop statement for printing 2D array
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//input statement from user
printf("\n Enter the element:a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}
//input statement from user
printf("The 2D array is: \n");
//nested loop statement for printing 2D array
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statement for printing 2D array
printf("%d\t",a[i][j]);
}
//output statement for printing 2D array
printf("\n");
}
}
