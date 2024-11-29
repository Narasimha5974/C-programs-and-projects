#include <stdio.h>
void main()
{
    int marks;
    scanf("%d",&marks);
    if (marks>=75){
    printf("FIRST CLASS : GRADE A");
    }
    else if (marks>=65){
      printf("SECOND CLASS : GRADE B");
    }
     else if (marks>=55){
    printf("THIRD CLASS : GRADE C");
     }
    else {
    printf("FOURTH CLASS : GRADE D");
    }
}
