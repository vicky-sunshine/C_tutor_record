#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, a, b, c, m;
  float result;

  //freopen("input.txt", "r", stdin);
  scanf("%d", &n);
  a = n / 100;
  b = n / 10 % 10;
  c = n % 10;
  m = c * 100 + b * 10 + a;
  result = (float) (n+m)/2;
  printf("%.1f", result); //note the output format

}
