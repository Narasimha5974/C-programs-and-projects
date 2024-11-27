#include<stdio.h>
int main(){
int a;
int b;
int choice;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter your choice:\n");
printf("1.Addition.\n");
printf("2.Subtraction.\n");
printf("3.Multiplication.\n");
printf("4.Division\n");
scanf("%d",&choice);
switch (choice){
case 1:
   int result = a+b;
   printf("%d",result);
break;
case 2:
   int result1=a-b;
   printf("%d",result1);
break;
case 3:
   int result2=a*b;
   printf("%d",result2);
break;
case 4:
   int result3=a/b;
   printf("%d",result3);
break;
default:
  printf("Enter the correct operation.");
break;
}
}
