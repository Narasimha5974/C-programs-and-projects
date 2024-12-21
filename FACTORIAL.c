//Factorial program 
#include<stdio.h>

int factorial(int n){
  if(n == 0 || n == 1)
    return 1;
return n *
  factorial(n-1);
}
int main(){
  int num;
  printf("Enter Number: ");
scanf("%d", & num);
printf("%d\n", factorial (num));
}
