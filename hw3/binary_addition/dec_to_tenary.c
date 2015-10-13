#include <stdio.h>
#include <stdlib.h>

int main(){

  int i; //for loop
  int num; //input num
  int binary[11]; //input in binary
  int length = 0; //length of input in binary
  int carry; //for addition
  int sum[11]; //the result after addtion
  int sum_length = 0; //sum length
  int carry_count = 0;

  //printf("input a num: ");
  scanf("%d", &num);
  //printf("input decimal: %d\n", num);

  //dec -> binary
  while( num > 1 ){
    if (num & 1){
      binary[length] = 1;
    }
    else
      binary[length] = 0;

    num = num >> 1;
    length++;
  }
  binary[length] = num;
  length++;

  //print dec-->bin result
  // printf("input binary: ");
  // for(i = length-1; i >= 0; i--){
  //   printf("%d", binary[i]);
  // }
  // printf("\ninput binary length: %d\n", length);

  //add 1
  sum_length = length;
  carry = 1;
  for(i = 0; i < length; i++){
    sum[i] = carry ^ binary[i];
    carry = carry & binary[i];
    if (carry == 1)
      carry_count++;
  }

  if(carry ==1){
    sum_length++;
    sum[sum_length-1]=1;
  }

  // printf("sum result: ");
  for(i = sum_length-1; i >= 0; i--){
    printf("%d", sum[i]);
  }
  // printf("\nsum length: %d\n", sum_length);
  printf(" %d", carry_count);

  return 0;
}
