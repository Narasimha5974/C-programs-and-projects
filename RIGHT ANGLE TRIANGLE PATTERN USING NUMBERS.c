#include <stdio.h>
int main()
{
    //printf("1\n1 2\n1 2 3\n1 2 3 4\n1 2 3 4 5\n");
  
   int num;
  scanf("%d", &num);
  for(int i=1; i<=num; i++){
    for(int j=1 ;j<=i; j++){
      printf("%d ", j);
    }
    printf("\n");
  }
}
