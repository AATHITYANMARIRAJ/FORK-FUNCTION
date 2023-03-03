#include <stdio.h>
int main(){
  int pid[15];
  int bt[15];
  int n;
  printf("enter the no of processes\n");
  scanf("%d",&n);
  
  printf("enter the process id of all the processes\n");
  
  for(int i=0;i<n;i++){
   scanf("%d",&pid[i]);
   }
   
   printf("enter the burst time of all the processes\n");
   for(int i=0;i<n;i++){
      scanf("%d",&bt[i]);
   }
   int i;
   int wt[n];
   wt[0]=0;
   
   //for calculating waiting time of each processs
   
   for(int i=1;i<n;i++){
      wt[i]=bt[i-1]+wt[i-1];
   }
   
   printf("Process id   Burst Time  Waiting Time  TurnAround Time\n");
   
   float twt=0.0;
   float tat=0.0;
   for(int i=0;i<n;i++){
      printf("%d\t\t",pid[i]);
      printf("%d\t\t",bt[i]);
      printf("%d\t\t",wt[i]);
      
      
      //to calculate and print turnaround time
      printf("%d\t\t",wt[i]+bt[i]);
      printf("\n");
      
      //to calculate total turnaround time
      tat+=(wt[i]+bt[i]);
      
      //to calculate total waiting time
      twt+=wt[i];
      
   }
   float awt=0.0;
   awt=twt/n;
   
   printf("average waiting time is %f\n",awt);
   
return 0;
}   
