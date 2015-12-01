#include <stdio.h>
#include "function.h"
int printchar(char c, int turn);
int main(void){

    char c;
    int length, n, i;
    scanf("%c %d %d", &c, &length, &n);

    if (length>1)
      length_greater_than_one(c, length, n);
    else {
      for (i=0; i<n-1; i++)
        printf("%c\n", c);
    }

    // print the last line
    printf("%c", c);
    return 0;

}

int length_greater_than_one(char c, int length, int n){
  int i, j;
  for (i = 0; i < n; i++) {
    //turn
    for(j=1; j<=length; j++){
      printchar(c,j);
    }
    for(j=length-1; j>=2; j--){
      printchar(c,j);
    }
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
