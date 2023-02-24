#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int args,char **argv){
    pid_t pid;
    pid=fork();
    if(pid==0){
       printf("its the child process and pid is %d\n",getpid());
    }
   else if(pid>0){
     printf("the is the parent process and pid is %d\n",getpid());
   
   }
   
   else{
      printf("error while forking\n");
   }
   
   int id1=fork();
   int id2=fork();
   
   printf("hello world from %d and %d\n",id1,id2);
   
   return 0;
}
