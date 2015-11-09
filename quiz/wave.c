#include <stdio.h>

int printchar(char c, int time);
int main(){

  char c;
  int length; //the length of the weight
  int turn; //how many turn of wave
  int i, j, k;

  scanf("%c %d %d", &c, &length, &turn);
  if(length!=1){
    for (i = 0; i < turn; i++) {
      //turn
      for(j=1; j<=length; j++){
        printchar(c,j);
      }
      for(j=length-1;j>=2;j--){
        printchar(c,j);
      }
    }
    printf("%c",c);
  }else{
    for (i = 0; i < turn-1; i++){
      printf("%c\n",c);
    }
    printf("%c",c);
  }

  return 0;
}

int printchar(char c, int turn){
  int i;
  for (i = 0; i < turn; i++) {
    printf("%c",c);
  }
  printf("\n");
  return 0;
}
