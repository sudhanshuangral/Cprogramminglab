//title of program
//write a program to check whether a given string is a palindrome
//header file
#include<stdio.h>
//header file for including string function in program code
#include<string.h>
// function taking for printing reverse string
void printrev(char str[])
{
//assignment of value
int len=strlen(str);
//output statement for printing given string
printf("Given string:");
//nested loop statement for checking palindrome string
for(int i=len-1;i>=0;i--)
{
//output statements
printf("%c",str[i]);
}
printf("\n");
}
//function taking for checking palindrome string
int ispal(char str[])
{
//assignment of value
int len=strlen(str);
for(int i=0;i<len/2;i++)
{
//for taking last string (it will match the string)
if(str[i]!=str[len-i-1])
{
//return statement for string which is not palindrome
return 0;
}
}
//return statement for string which is palindrome
return 1;
}
//main function heading
int main()
{
//character(array) declaration
char input[100];
//input statement from user
printf("Enter the string:");
scanf("%s",input);
//output statement for printing reverse of string
printrev(input);
//if else statement
if(ispal(input))
{
//output statement for printing the string is a palindrome
printf("%s is a palindrome",input);
}
else{
//output statement for printing the string is not palindrome
printf("%s is not palindrome",input);
}
}