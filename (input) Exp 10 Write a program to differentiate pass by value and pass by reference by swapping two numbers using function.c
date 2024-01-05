//title of program
//program to differentiate pass by value and pass by reference by swapping two numbers using function
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration and inititalization 
int a=10,b=20;
//function declaration without return type with argument 
void swap(int,int);
void swap1(int*,int*);
//output statement
printf("Before swapping");
printf("A=%d\t B=%d\n",a,b);
//function call
swap(a,b);
//output statement(prints same result)
printf("After swapping");
printf("A=%d\t B=%d\n",a,b);
//function call
swap1(&a,&b);
//output statement
printf("After swapping");
printf("A=%d\t B=%d\n",a,b);
}
void swap(int x,int y)
{
//interchanging x&y values statements
int t=x;
x=y;
y=t;}
void swap1(int*x,int*y)
{
int t=*x;
*x=*y;
*y=t;
}
