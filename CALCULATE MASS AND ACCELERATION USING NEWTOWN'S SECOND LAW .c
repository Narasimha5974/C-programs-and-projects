#include <stdio.h>
int main()
{
  float mass, acceleration,force;
  printf("Enter the mass of the object(in kg): ");
  scanf("%f",&mass);
  printf("Enter the acceleration of the object(in meter per second square): ");
  scanf("%f",& acceleration);
  force=mass*acceleration;
  printf("The force acting on the object is: %.2f Newtowns\n",force);
  return 0;
}
