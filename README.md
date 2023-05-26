# InputScan
C library made to simplify user input, include removing the enter key character & clearing buffer after use.


𝐇𝐨𝐰 𝐭𝐨 𝐢𝐧𝐜𝐥𝐮𝐝𝐞 𝐭𝐡𝐞 𝐥𝐢𝐛𝐫𝐚𝐫𝐲 𝐢𝐧𝐭𝐨 𝐲𝐨𝐮𝐫 𝐩𝐫𝐨𝐣𝐞𝐜𝐭

```
#include "inputscan.h"
#include "inputscan.c"
```


𝐅𝐮𝐧𝐜𝐭𝐢𝐨𝐧 𝐩𝐫𝐨𝐭𝐨𝐭𝐲𝐩𝐞 

``è
char inputScan(char *input, int size);
```


𝐄𝐱𝐚𝐦𝐩𝐥𝐞

``` 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "inputscan.h"
int main(){
  char *user_input;
  printf("Enter your name :\n");
  intputScan(user_input, SIZE);
  printf("Your name is : \n", user_input);
  return EXIT_SUCCESS;
}
```
