#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num);
void main()
{
  int num;
  scanf("%d",&num);
  if (isPrime(num)){
    printf("%d is a prime Number",num);
  }
  else{
    printf("%d it is not a prime Number",num);
  }
}

bool isPrime(int num){
  if (num <=1){
    return false;
  }
  for(int i=2;i*i<=num; i++){
    if (num%i==0){
      return false;
    }
  }
  return true;
}
