#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inputScan(char *input, int size){
  fgets(input, size, stdin);
  if(input[strlen(input) - 1] == '\n'){
    input[strlen(input) -1] = '\0';
  }
  return *input;
}
