/******************************************************************************

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
    int i,j,n,t,p[max],bt[max],wt[max],tat[max];
    float awt=0,atat=0;
    printf("Enter no of process \n");
    scanf("%d",&n);
    printf("Enter process no \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter burst time \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    //bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(bt[j]>bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;
                
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
   
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+bt[i];
        atat=atat+tat[i];
        printf("waiting time =%d,burst time=%d,tat=%d \n",wt[i],bt[i],tat[i]);
    }
       awt=awt/n;
       atat=atat/n;
       
    printf("Avg wt time =%f \n",awt);
printf("tat=%f \n",atat);

    return 0;
}
