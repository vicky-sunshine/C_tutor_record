#include <stdio.h>

int main(){
  int row_A, col_A, row_B, col_B;
  int i, j, k;
  int sum;
  int A[10][10];
  int B[10][10];
  int C[10][10];

  /* input Ａ */
  scanf("%d %d",&row_A, &col_A);
  for(i = 0; i < row_A; i++){
    for(j = 0; j < col_A; j++){
      scanf("%d", &A[i][j]);
    }
  }

  /* input B*/
  scanf("%d %d",&row_B, &col_B);
  for(i = 0; i < row_B; i++){
    for(j = 0; j < col_B; j++){
      scanf("%d", &B[i][j]);
    }
  }

  for(i = 0; i < row_A; i++){
    for(j = 0; j< col_B; j++){
      sum = 0;
      for(k = 0; k< col_A; k++){
        sum += A[i][k]*B[k][j];
      }
      C[i][j] = sum;
    }
  }

  for(i = 0; i < row_A; i++){
    for(j = 0; j < col_B; j++){
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

}
