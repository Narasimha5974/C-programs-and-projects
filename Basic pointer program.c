#include <stdio.h>
void main()
{
  int a =10;// integer variable
  int *p;// pointer variable
  p=&a;
  printf("A value: %d\n",a);
  printf("A Address: %d\n",&a);
  printf("P value: %d\n",p);
  // * -->  DEREFERENCING OPERATOR
  printf("DEREFERENCING: %d\n",*p);
}
