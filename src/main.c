#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(){

  // Flush after every printf
  setbuf(stdout, NULL);

  using_history();
  char *input; 
  while ((input = readline ("mussel-0.1$ ")) != NULL){
    printf("%s: command not found!\n", input); 
    add_history(input);
    free(input);
  }
  clear_history();
  return 0;
}
