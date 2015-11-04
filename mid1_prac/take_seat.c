#include <stdio.h>

int main(){
  int m, n; //seat size
  int person; //number of person
  int x, y, id; //seat location and id
  int i, j; //for loop
  int seat[40][40];

  scanf("%d %d %d", &m, &n, &person);

  //initial, all seat is zero
  for (i = 0; i < m; i++) {
    for(j = 0; j < n; j++){
        seat[i][j] = 0;
    }
  }

  for (i = 0; i < person; i++) {
    scanf("%d %d %d",&x,&y,&id);
    seat[x-1][y-1] = id; //notice index in count from zero
  }

  //output
  for (i = 0; i < m; i++) {
    printf("%9d",seat[i][0]); //no space in front of first element
    for(j = 1; j < n; j++){
        printf(" %9d",seat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
