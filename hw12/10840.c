#include <stdio.h>
#include <string.h>
int isPalindrome(char *start, char *end);

int main()
{
  char str[5000];
  while (EOF != scanf("%s", str)){
    char *start = str;
    char *end = start + strlen(str) - 1;
    if(isPalindrome(start, end)){
        printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
}

int isPalindrome(char *start, char *end){
  int length;
  int i;
  int check = 1;

  length = end - start + 1;

  if(length==1)
    return 1;

  for(i=0; i<=length/2; i++){
    if(*(start+i) != *(end-i)){
      check = 0;
    }
  }

  return check;
}
