#include<stdio.h>
int main(){ //a=97,b=98,c=99
  char str[10];//A=65,B=66,C=67
  int sum=0;
  scanf("%s",&str);
  printf("string: %s\n",str);
  for(int i=0;str[i]!='\0';i++){
    sum =sum+str[i];
  }
  printf("sum of ASCII Letter %s is: %d",str,sum);
}
