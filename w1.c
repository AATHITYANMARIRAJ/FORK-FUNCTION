#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int args,char** argv){
   pid_t pid;
   pid=fork();
   if(pid==0){
      printf("its the child process and pid is %d\n",getpid());
      
      int i;
      for(int i=0;i<8;i++){
         printf("%d\n",i);
      }
      
      exit(0);
   }
   else if(pid>0){
      printf("it is the parent process and pid is %d\n",getpid());
      int status;
      wait(&status);
      printf("child is reaped\n");
   }
   
   else{
      printf("error is forking\n");
      exit(EXIT_FAILURE);
   }
   return 0;
   


  return 0;
}

