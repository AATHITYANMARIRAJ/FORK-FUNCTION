#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<errno.h>
#include<sys/shm.h>
int main(){
    void *sharedmemory;
    char buff[100];
    int shmid;
    shmid=shmget((key_t)1001,2048,0666); // giving the permission to this process to access (read and write) from the file
    sharedmemory=shmat(shmid,NULL,0);  //making the process attach to the shared memory segment
    printf("\ndata read from the shared memory segment is : ");
    printf("%s",(char *)sharedmemory);
}
