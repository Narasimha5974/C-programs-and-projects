#include <stdio.h>
  int is_prime(int num){
    if (num<=1){
      return 0;
    }
    for(int i=2; i*i <= num; i++){
      if (num % i == 0){
        return 0;
      }
    }
    return 1;
  }

int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  
  if(is_prime(num)){
    printf("IT IS A PRIME NUMBER.\n",num);
  }
  else{
    printf("IT IS NOT A PRIME NUMBER.\n",num);
  }
  return 0;
}
