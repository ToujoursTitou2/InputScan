# InputScan
C library made to simplify user input, include removing the enter key character.


𝐇𝐨𝐰 𝐭𝐨 𝐢𝐧𝐜𝐥𝐮𝐝𝐞 𝐭𝐡𝐞 𝐥𝐢𝐛𝐫𝐚𝐫𝐲 𝐢𝐧𝐭𝐨 𝐲𝐨𝐮𝐫 𝐩𝐫𝐨𝐣𝐞𝐜𝐭 
#include "userscan.h" ---> It's important for the library
#include "userscan.c" ---> to be included in that order.

𝐅𝐮𝐧𝐜𝐭𝐢𝐨𝐧 𝐩𝐫𝐨𝐭𝐨𝐭𝐲𝐩𝐞 
char userScan(char *input, int size);

𝐄𝐱𝐚𝐦𝐩𝐥𝐞
#include <stdio.h>
#include "userscan.h"
#include "userscan.c"
void main(){
  char your_char_variable;
  printf("Your_message_askin_the_user_to_enter_something");
  userScan(your_char_variable, the_size_you_want);
  printf("you_return_user_input_which_is %s\n", your_char_variable);
}
