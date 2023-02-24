#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkvalue(){
   int x=1;
   if(fork()==0){
       printf("child has %d value\n",--x);
   }
   else{
       printf("parent has %d value\n",++x);
   }

}

int main(){

  forkvalue();
  return 0;
}
