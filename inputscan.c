#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char inputScan(char *input, int size){
  int c = 0;
  if(fgets(input, size, stdin) != NULL){
    if(input[strlen(input) - 1] == '\n'){
      input[strlen(input) - 1] = '\0';
    }
    return *input;                                    
    while(c != '\n' && c != EOF){
      c = getchar();
    }
  }else{
    printf("Error: %s\n", strerror(errno));
    return EXIT_FAILURE;
  }
}
