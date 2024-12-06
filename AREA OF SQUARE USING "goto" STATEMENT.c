#include <stdio.h>
int main()
{
  int side,area;
  scanf("%d",&side);
  if(side > 0){
    goto CSE;
  }
  else{
    goto ERROR;
  }
  CSE:
  area = side * side;
  printf("AREA OF SQUARE: %d",area);
  exit(0);
  
  ERROR:
  printf("INVALID INPUTS");
}
