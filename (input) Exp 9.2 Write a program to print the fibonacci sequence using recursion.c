//title of program
//program to print the fibonacci sequence using recursion
//header file
#include<stdio.h>
//function taking for printing factorial sequence
int fib(int n)
{
//if else statement
if(n<=1)
//return statement(if part)
return n;
else
//return statement(else part)
return fib(n-1)+fib(n-2);
}
//function taking for fib1
int fib1(int n,int i)
{
//if statement
if(i<n)
{
//output statement
printf("%d",fib(i));
//statement for fib1
fib1(n,i+1);
}
}
//main function heading
void main()
{
//variable declaration
int n;
//input statement from user
printf("\n Enter the number of terms:");
scanf("%d",&n);
//output statement
printf("\n Fibonacci sequence:");
fib1(n,0);
}