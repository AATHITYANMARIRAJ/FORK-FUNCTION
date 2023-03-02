#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<errno.h>
#include<sys/shm.h>
//reading the input from the keyboard using read() and storing it in the shared memory segment


int main(){
      void *sharedmemory;  // generic pointer
      char buff[100];
      int shmid;
      shmid=shmget((key_t)1001,2048,0666|IPC_CREAT);  //0666 permission to read and write and returns a key 
      //printf("\n%d",shmid);
      sharedmemory=shmat(shmid,NULL,0); //this is used to attach the process to memory segment
      printf("\nprocess attached at %p",sharedmemory);
      // we have created the shared memory segment now its time to read the data from the user (i.e process)
      printf("\nEnter the data to store in the shared memory segment : ");
      read(0,buff,20); // 0-file descriptor specifies reading option , buff - char array, 20 - no of bytes to read
      strcpy(sharedmemory,buff);
      printf("\nOur data : %s",(char *)sharedmemory);
}
