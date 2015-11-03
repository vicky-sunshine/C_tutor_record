#include <stdio.h>

int main(){

  int n; //input vector length
  int a[10]; //input vector
  int mtx[10][10]; //result matrix
  int i, j; // for loop
  int start_index; // start index of each row

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++) {
    /* in each row */

    /* calc the start index*/
    start_index = i % n;
    /* put the certain value based on the index in the mtx*/
    for (j = 0; j < n; j++) {
      mtx[i][j] = a[(start_index + n) % n];
      start_index--;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%2d", mtx[i][j]);
    }
    printf("\n");
  }

}
