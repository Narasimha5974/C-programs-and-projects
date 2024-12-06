#include <stdio.h>
int main()
{
  float mass, velocity,kinetic_energy;
  // input mass and velocity 
  printf("Enter the mass of the object in kilograms: ");
  scanf("%f",&mass);
  printf("Enter the velocity of the object in meter per second: ");
  scanf("%f",& velocity);
  //calculate kinetic energy 
  kinetic_energy=0.5*mass*velocity*velocity;
  //printing the result
  printf("The kinetic energy of the object is: %2f joules\n",kinetic_energy);
  return 0;
}
