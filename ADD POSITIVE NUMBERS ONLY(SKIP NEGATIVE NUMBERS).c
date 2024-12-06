#include <stdio.h>
int main()
{
  int num,sum=0;
  for(int i=1; i<=10;i++){
    scanf("%d",&num);
    if(num < 0){
      continue;
    }
    sum=sum+num;
  }
  printf("SUM OF POSITIVE NUMBERS: %d",sum);
}
