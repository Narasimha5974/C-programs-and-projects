#include<stdio.h>
#include<string.h>
int main(){
  char str1[10],str2[10];
  scanf("%s %s",&str1,&str2);
  printf("first string: %s\n",str1);
  printf("second string: %s\n",str2);
  int result = strcmp(str1,str2);
  //H= 72, C= 67 => 72-67 = 5
  //H= 72, c= 99 => 72-99 = -27
  if (result >0){
    printf("%s is Greater then %s is %d",str1 ,str2,result );
  }
  else if(result<0){
    printf("%s is Smaller then %s is %d",str1 ,str2,result );
  }
  else{
    printf("%s and %s both are Equal is %d",str1 ,str2,result );
  }
}
