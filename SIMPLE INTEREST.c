# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
int main()

{

 int p, r, t, SI;
 printf("Enter the p, r and t values: ");
 scanf("%d %d %d", &p ,&r, &t);

 SI = (p * r* t) / 100;

 printf("The Simple interest is %d", SI);
 return 0;
}
