#include <stdio.h>

int main(){

int soma = 0;
 



char linha[10][10] = {
{'A'}, {'B'}, {'C'}, {'D'}, {'E'}, {'F'}, {'G'}, {'H'}, {'I'}, {'J'},

};

  char coluna[10][10]={
    {'0', '0', '0', '0', '0', '0', '0', '0','0', '0'},
    {'1', '0', '3', '3', '3', '0', '0', '0','0', '0'},
    {'2', '0', '0', '0', '0', '3', '0', '0','0', '0'},
    {'3', '0', '0', '0', '0', '3', '0', '0','0', '0'},
    {'4', '0', '0', '0', '0', '3', '0', '0','0', '0'},
    {'5', '0', '0', '0', '0', '0', '0', '0','0', '0'},
    {'6', '0', '0', '0', '0', '0', '0', '0','0', '0'},
    {'7', '0', '0', '0', '0', '0', '0', '0','0', '0'},
    {'8', '0', '0', '0', '0', '0', '0', '0','0', '0'},
    {'9', '0', '0', '0', '0', '0', '0', '0','0', '0'}

    
  };


printf("Batalha Naval\n\n");
printf("  ");

for(int i = 0; i < 10; i++){
    printf("%c ", linha[i][0]);
    
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ",coluna[0][j]);
    
   }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[1][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[2][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[3][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[4][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[5][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[6][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[7][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[8][j]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("%c ", coluna[9][j]);
  }







return 0; 
}
