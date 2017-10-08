#include "utils.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  char tmp[10000];
  strcpy(tmp,command);
  *argc=0;
  char* token;
 
  *argv=(char**)(malloc(sizeof(char*)*8000));
  token=strtok(tmp," \t\n"); 
  while(token!=NULL){     
     (*argv)[*argc]=(char*)(malloc(sizeof(char)*8000));
     strcpy((*argv)[*argc],token);
     *argc+=1; 
     token=strtok(NULL," \t\n");
  }
  if(*argc==0){
    (*argv)[*argc]=(char*)(malloc(sizeof(char)*8000));
    strcpy((*argv)[*argc],"");
    *argc+=1;
  }
  // TODO: Fill this!
}
