//Code by Kingdavid Christian
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//included the libraries within <>
int main(){
float a, b, c;
float d, root1, root2;
//Listed the variables
printf("Write your quadratic equation in this format ax^2+bx+c : ");
//The format (ax^2+bx+c) to be used to assign to variables
scanf("%fx^2 %fx %f", &a, &b, &c);
//Placed an address to constants a, b and c
d= b * b - 4 *a * c;
//Formula to find d
if(d<0){
printf("Roots are complex numbers\n");
return 0;
//Close code
}
//Placed an if statement 
root1= (-b+sqrt(d))/(2*a);
root2= (-b-sqrt(d))/(2*a);
//Formula to find root1 & 2
printf("Your answer is : %.3f %.3f\n", root1, root2);
//Result
return 0;
//Close code
}
//Code by Kingdavid Christian
