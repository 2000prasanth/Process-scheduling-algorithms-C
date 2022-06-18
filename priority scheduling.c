OUG/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 30
int main()
{
    int i,j,n,t,bt[max],wt[max],pr[max],tat[max],pos;
    float awt=0,atat=0;
    printf("Enter no of process \n");
    scanf("%d",&n);
    printf("enter burst time \n");
for(i=0;i<n;i++)
{
    scanf("%d",&bt[i]);
}
printf("enter priority ascending\n");
for(i=0;i<n;i++)
{
    scanf("%d",&pr[i]);
}
//sorting based on priority
for(i=0;i<n;i++)
{
    pos=i;
    for(j=i+1;j<n;j++)
    {
        if(pr[j]<pr[pos])
        {
            pos=j;
        }
    }
    t=pr[i];
    pr[i]=pr[pos];
    pr[pos]=t;
    t=bt[i];
    bt[i]=bt[pos];
    bt[pos]=t;
}
wt[0]=0;
  for(i=0;i<n;i++)  
  {
      wt[i]=0;
      tat[0]=0;
      for(j=0;j<i;j++)
      {
          wt[i]=wt[i]+bt[j];
      }
      tat[i]=wt[i]+bt[i];
      awt=awt+wt[i];
      atat=atat+tat[i];
      printf("waiting time =%d,burst time=%d,tat=%d \n",wt[i],bt[i],tat[i]);
  }
    
       awt=awt/n;
       atat=atat/n;
       
    printf("Avg wt time =%f \n",awt);
printf("tat=%f \n",atat);

    return 0;
}
