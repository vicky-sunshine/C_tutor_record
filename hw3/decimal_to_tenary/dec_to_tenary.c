#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, show;
  int tenary[11];
  int length = 0;
  int i = 0;
  scanf("%d %d", &num, &show);

  //intial
  for(i = 0; i < 11; i++){
    tenary[i] = 0;
  }

  while(num > 0){
    tenary[length] = num % 3;
    num = num / 3; //integer
    length++;
  }

  for (i = show - 1; i >= 0; i-- ){
    printf("%d",tenary[i]);
  }
  printf("\n");

  return 0;
}
