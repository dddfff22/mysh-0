#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  else{ 
    return 0;
   }
  // TODO: Fill it!
  
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  else{
   fprintf(stderr,"%s\n",getcwd(NULL,9000));
  }
  // TODO: Fill it!
  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  char tmp[10000];
  strcpy(tmp,getcwd(NULL,9000));
  if(strcmp(argv[0],"cd")!=0){
     return 0;
  }else if(argc==1){
     return 0;
  }else if(strcmp(argv[1],".")==0&&argc==2){
     return 1;
  }
  chdir(argv[1]);
  if(strcmp(tmp,getcwd(NULL,9000))==0){
    return 0;
  }
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
  if(strcmp(argv[0],"pwd")!=0){
    return 0;
  }else if(argc!=1){
     return 0;
  }else if(argc==1){
     return 1;
  }
}











