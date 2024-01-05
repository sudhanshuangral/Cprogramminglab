//title of program
//program to demonstrate the use of various string operations 
//header file
#include<stdio.h>
//header file  for using string in program code
#include<string.h>
//main function heading
void main()
{
//char(string) declaration
char str1[20],str2[20],str3[20];
//initializing variable
int res;
//input statement for string 1
printf("Enter the string 1:\n");
scanf("%s",str1);
//input statement for string 2
printf("Enter the string 2:\n");
scanf("%s",str2);
//output statement for printing concatenation string
printf("Concatenation string is:%s\n",strcat(str1,str2));
//statement for comparing 2 strings i.e; str1,str2
res=strcmp(str1,str2);
//output statement for printing compare string result
printf("Compare string result is:%d\n",res);
//statement for copying string
strcpy(str3,str1);
//output statement for printing third string
printf("Third string is:%s\n",str3);
//output statement for printing third string lower case
printf("\n Third string lower case is:%s",strlwr(str3));
//output statement for printing third string upper case
printf("\n Third string upper case is:%s",strupr(str3));
}