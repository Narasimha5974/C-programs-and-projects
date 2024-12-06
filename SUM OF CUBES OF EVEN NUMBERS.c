#include <stdio.h>
int main()
{
  //EXAMPLE-1
  // 4=2,4
  //8+64=72
  //EXAMPLE-2
  //8=2,4,6,8
  //8+64+216+512=800
  int limit,num=2,sum=0,cube=0;
  scanf("%d",&limit);
  while(num<=limit){
    cube=num*num*num;
    sum=sum+cube;
    num=num+2;
  }
  printf("SUM OF CUBE OF EVEN NUMBERS UPTO %d: %d",limit,sum);
}
