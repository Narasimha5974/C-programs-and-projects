#include <stdio.h>
double average(int arr[],int size);
void main(){
  int size;
  scanf("%d",&size);
  int arr[size];
  for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
  }
  double result =average (arr, size);
  printf("\nAverage = %.2f",result);
}
double average(int arr[],int size){
  double average;
  int sum=0;
  printf("Array: ");
for(int i=0; i<size; i++ ){
  sum = sum + arr[i];
  printf("%d ",arr[i]);
}
average = sum/size;
return average;
}
