#include <stdlib.h>
#include <stdio.h>

int main(){
  int n, tmp;
  int i, j; //for loop
  int matrix[9][9];

  scanf("%d",&n); //degree of matrix
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      scanf("%d", &matrix[i][j]);
    }
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      scanf("%d", &tmp);
      if(tmp < matrix[i][j]){
        matrix[i][j]=tmp;
      }
    }
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < n-1; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("%d", matrix[i][n-1]); //no space at the end
    printf("\n");
  }
  return 0;
}
