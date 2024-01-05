//title of program
//program to calculate factorial of a number using recursion
//header file
#include<stdio.h>
//function taking for factorial calculation
int fact1(int);
//main function heading
void main()
{
//variable declaration
int a,fact;
//input statement from user
printf("\n Enter the number:");
scanf("%d",&a);
//assignment of value
fact=fact1(a);
//output statement
printf("\n Factorial of %d is %d",a,fact);
}
//function taking for fact1
int fact1(int x)
{
//if else statement
if(x<=0)
//return statement(if part)
return 1;
else
//return statement(else part)
return x*fact1(x-1);
}