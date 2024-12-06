#include <stdio.h>
int main()
{
  int day;
  printf("Enter day(1-7): ");
  scanf("%d",&day);
  switch(day){
    case 1:
    printf("1. MONDAY\n");
    break;
        case 2:
    printf("2. TUESDAY\n");
    break;
        case 3:
    printf("3. WEDNESDAY\n");
    break;
        case 4:
    printf("4. THURSDAY\n");
    break;
        case 5:
    printf("5. FRIDAY\n");
    break;
        case 6:
    printf("6. SATURDAY\n");
    break;
        case 7:
    printf("7. SUNDAY\n");
    break;
    default:
    printf("INVALID CODE⚠️");
  }
}
