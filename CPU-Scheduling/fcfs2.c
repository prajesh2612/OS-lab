#include<stdio.h>
 
int main()
{
    int n,at[20],bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j,t1=90,t2=0,t3=0;
    printf("Enter total number of processes:");
    scanf("%d",&n);
    int p[n];
    
    printf("\nEnter Process Arrival Time\n");
    for(i=0;i<n;i++)
    {
        p[i]=(i+1);
        printf("P[%d]:",i+1);
        scanf("%d",&at[i]);
    }
 
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(at[j]>at[j+1])
            {
                t1=at[j];
                at[j]=at[j+1];
                at[j+1]=t1;
                
                t2=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t2;
                
                t3=p[j];
                p[j]=p[j+1];
                p[j+1]=t3;
            }
        }
    }
    wt[0]=0; 
    for(i=1;i<n;i++)
    {
        wt[i]=(bt[i-1]+at[i-1])-at[i];
    }
     printf("\nProcess\t\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i]; 
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d",p[i],at[i],bt[i],wt[i],tat[i]);
    }
    avwt/=i;
    avtat/=i;
    printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
 
    return 0;
}