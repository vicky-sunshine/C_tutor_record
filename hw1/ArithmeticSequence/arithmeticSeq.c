#include <stdlib.h>
#include <stdio.h>

int main(){
  int init, num, diff;
  int sum, nth;
  freopen("int.txt","r",stdin); //point 1 debug method
  while(scanf("%d %d %d",&init,&num,&diff)!=EOF){ //point 2: EOF
    nth = init + (num -1) * diff;
    sum = num * ( 2 * init + (num - 1) * diff) / 2;
    printf("%d %d",nth,sum);//point 3 notice about output format
  }

  return 0;
}
