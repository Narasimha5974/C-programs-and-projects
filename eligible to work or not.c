#include<stdio.h>
int main()
{
int age;
printf("Enter age: ");
scanf("%d",&age);
if(age>=18){
printf("Your are eligible to work.");
}
else{
printf("Your are not eligible to work.");
}
}