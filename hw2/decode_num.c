#include <stdio.h>
#include <stdlib.h>

char decode(char input);
int main(){
  char input;
  while(scanf("%c",&input)!=EOF){
    printf("%c",decode(input));
  }
}

char decode(char input){
  switch (input){
    case '1':
      return 'A';
    case '2':
      return 'B';
    case '3':
      return 'C';
    case '4':
      return 'D';
    case '5':
      return 'E';
    case '6':
      return 'F';
    case '7':
      return 'G';
    case '8':
      return 'H';
    case '9':
      return 'I';
    default:
      return ' ';
  }
}
