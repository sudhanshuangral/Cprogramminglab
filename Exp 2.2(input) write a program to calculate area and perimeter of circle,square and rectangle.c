// title of program
//program to calculate area and perimeter of circle, square and rectangle
#include<stdio.h>
//function heading
void main()
{
//variable declaration for radius
float r;
//output statement for circle
printf("enter the radius");
//input statement for circle
scanf("%f",&r);
//input statement to find
float area,peri;
//formula used for circle
area=3.14*r*r;
peri=2*3.14*r;
//output statement for circle
printf("area of circle=%.2f\n",area);
printf("perimeter of circle=%.2f\n",peri);
//variable declaration for square
float s;
//output statement for square
printf("enter the value of s");
//input statement for square
scanf("%f",&s);
//input statement to find,formula used
area=s*s;
peri=4*s;
//output statement for square
printf("area of square=%f\n",area);
printf("perimeter of square=%f\n",peri);
//variable declaration for rectangle
float l,b;
//output statement for rectangle
printf("enter the length and breadth");
//input statement for rectangle
scanf("%f%f",&l,&b);
//input statement formula used 
area=l*b;
peri=2*(l+b);
//output statement for rectangle
printf("area of rectangle=%f\n",area);
printf("perimeter of rectangle=%f\n",peri);
}
    




    


















































