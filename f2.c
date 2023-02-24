#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void example(){
    if(fork()==0){
       printf("hello from child process\n");
    }
    else{
        printf("hello from parent process\n");
    }

}

int main(){
   

}
