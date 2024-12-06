#include <stdio.h>
int main()
{
  int num,sum=0,count=0;
  float average;
  while(1){
    if(scanf("%d",&num)!=1){
      break;
    }
    sum=sum+num;
    count=count+1;
  }
  if(count>0){
    average =sum/count;
    printf("AVERAGE=%f",average);
  }
  else{
    printf("CHECK YOUR PROGRAM OR INPUT NUMBER");
  }
}
