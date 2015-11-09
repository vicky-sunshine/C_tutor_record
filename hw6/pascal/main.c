#include <stdio.h>
int Cal(int n, int k);
void pascalNum(int n);
int main()
{
    int n = -1;

    while(n!=0){
        scanf("%d",&n);
        pascalNum(n);
    }
    return 0;
}

void pascalNum(int n){
  int i;
  if(n==0)
    return;

  for(i = 1; i <= n+1; i++){
    printf("%6d",Cal(n+1,i));
  }

  printf("\n");
  return;
}

int Cal(int n, int k){
  if(k == 1){
    return 1;
  }else if(n == k){
    return 1;
  }else{
    return Cal(n-1, k-1) + Cal(n-1, k);
  }
}
