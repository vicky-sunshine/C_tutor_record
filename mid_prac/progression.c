#include <stdio.h>

int main(){
  int seq[4]; //the sequence
  int diff[3]; //common difference
  int ratio[3]; //common ratio

  int i; // for loop
  int check = 1; //isArithetic?

  for (i = 0; i < 4; i++) {
    scanf("%d", &seq[i]);
  }

  //calc
  for (i = 0; i < 3; i++) {
    diff[i] = seq[i+1] - seq[i];
    ratio[i] = seq[i+1] / seq[i]; // the quizz not consider about float
  }

  //check
  for (i = 0; i < 2; i++){
    if( diff[i] != diff[i+1] ){
      check = 0;
    }
  }

  if(check == 1){
    //arithetic seq
    printf("%d %d", seq[3] + diff[0], diff[0]);
  }else{
    //geometric
    printf("%d %d", seq[3] * ratio[0], ratio[0]);
  }

  return 0;
}
