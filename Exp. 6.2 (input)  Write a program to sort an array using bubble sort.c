//title of program
//program to sort an array using bubble sort
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable(array) declaration
int arr[30],i,num,temp,j;
//input statement from user
printf("Enter the size of an array");
scanf("%d",&num);
//input statement from user
printf("Enter the value of an array");
//nested loop statement to sort an array
for(i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<num;i++)
{
printf("%d",arr[i]);
}
//nested loop statementb to sort an array
for(i=0;i<num;i++)
{
for(j=0;j<num-i-1;j++)
{
//if statement
if(arr[j]>arr[j+1])
{
//assignment of values for sorting array
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
//output statement
 printf("Print sorted elements are...... ");
 //for loop statement
for(i=0;i<num;i++)
{
//output statement
printf("\n %d",arr[i]);
}
}

