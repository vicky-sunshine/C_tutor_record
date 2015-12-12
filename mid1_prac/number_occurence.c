#include <stdio.h>
#include <string.h> //use strlen()

//problem: http://acm.cs.nthu.edu.tw/problem/10784/
int main(){
  char a[3];
  char b[10];
  int count;
  int i;

  scanf("%s", a);
  scanf("%s", b);

  count = 0;
  for (i = 0; i < strlen(b) - 1; i++) {
    if (b[i] == a[0] && b[i+1] == a[1]) {
      count++;
    }
  }

  printf("%d", count);
  return 0;
}
