#include <stdio.h>
#include <stdlib.h>

int main(){

  int n; //matrix degree
  int x, y; //origin point
  int i, j; //for loop
  int matrix[7][7];

  scanf("%d",&n);
  scanf("%d %d",&x,&y);

  //for matrix index
  x--;
  y--;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      matrix[i][j]=abs(i-x)+abs(j-y);
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%3d",matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
int abs(int num){
  if(num <0){
    return -num;
  }
  return num;
}
