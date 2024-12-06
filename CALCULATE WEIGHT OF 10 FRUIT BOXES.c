#include <stdio.h>
int main()
{
  double fruitbox1,fruitbox2, weight, total;
  scanf("%lf %lf",&fruitbox1,&fruitbox2);
  weight=fruitbox1+fruitbox2;
  total=weight*10;
  printf("weight of 10 boxes: %lf",total);
}
