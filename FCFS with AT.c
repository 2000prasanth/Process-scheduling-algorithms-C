/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 30
int main()
{
int i,j,n,bt[max],wt[max],tat[max],at[max],temp[max];
float awt=0,atat=0;
printf("Enter no of process \n");
scanf("%d",&n);
printf("enter burst time \n");
for(i=0;i<n;i++)
{
    scanf("%d",&bt[i]);
}
printf("Enter AT \n");
for(i=0;i<n;i++)
{
    scanf("%d",&at[i]);
}
temp[0]=0;
for(i=0;i<n;i++)
{
    wt[i]=0;
    tat[i]=0;
    temp[i+1]=temp[i]+bt[i];
    wt[i]=temp[i]=at[i];
      
    
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
