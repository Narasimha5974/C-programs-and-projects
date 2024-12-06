#include<stdio.h>
int main()
{
  int num, odd=0 ,even=0 ;
  scanf("%d",&num);
  int i=1;
  do{
    if(i%2==0){
      even = even + i;
    }
    else{
      odd = odd + i;
    }
    i++;
  }while(i<=num);
  printf("SUM OF EVEN NUMBERS UPTO %d: %d\n",num,even);
  printf("SUM OF ODD NUMBERS UPTO %d: %d\n",num,odd);
}
