#include <stdio.h>
int main()
{
  int grade;
  scanf("%d",&grade);
  switch (grade / 10){
    case 10://100
    case 9://99-90
    printf("A GRADE");
    break;
     case 8://89-80
    printf("B GRADE");
    break;
     case 7://79-70
    printf("C GRADE");
    break;
     case 6://69-60
    printf("D GRADE");
    break;
     case 5://59-50
    printf("E GRADE");
    break;
    default://BELOW 50 FAIL
    printf("FAIL");
  }
}
