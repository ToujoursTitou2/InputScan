#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char inputScan(char *input, int size){
  if(fgets(input, size, stdin) != NULL){;
    if(input[strlen(input) - 1] == '\n'){
      input[strlen(input) - 1] = '\0';
    }
    return *input;
  }else{
    printf("Error: %s\n", strerror(errno));
    exit(EXIT_FAILURE);
  }
}
