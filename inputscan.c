#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char inputScan(char *input, int size){
  if(fgets(input, size, stdin) != NULL){
    if(input[strlen(input) - 1] == '\n'){
      input[strlen(input) - 1] = '\0'; 
    }else{
      clearBuffer();
    }
  }else{
    clearBuffer();
    printf("Error: %s\n", strerror(errno));
    return EXIT_FAILURE;
  }
}

void clearBuffer(){
  int c = 0;
  while(c != '\n' && c != EOF){
    c = getchar();
  }
}
