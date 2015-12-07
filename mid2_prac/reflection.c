#include <stdio.h>

int main(){

  int width, height;
  int x, y;
  int x_dir, y_dir;
  int num;
  int count;
  int collision;

  scanf("%d %d", &height, &width);
  scanf("%d %d", &x, &y);
  scanf("%d", &num);
  // printf("height = %d, width = %d, num = %d\n", height, width, num);

  count = 1;
  x_dir = -1;
  y_dir = 1;
  // printf("x_dir = %d, y_dir = %d, count = %d\n", x_dir, y_dir, count);


  while(count < num){
    collision = 0;
    x += x_dir;
    y += y_dir;

    //stuck in the corner
    if((x == 1 && y == 1)
      ||(x == 1 && y == height)
      ||(x == width && y == 1)
      ||(x == width && y == height)){
        break;
      }

    //change direction
    if(x == height|| x == 1){
      x_dir *= -1;
      count++;
    }

    //change direction
    if(y == width|| y==1){
      y_dir *= -1;
      count++;
    }
    // printf("(%d, %d), count = %d\n", x, y, count);

  }
  printf("(%d,%d)",x,y);

  return 0;
}
