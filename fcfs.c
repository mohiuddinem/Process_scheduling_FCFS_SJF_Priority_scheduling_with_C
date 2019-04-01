/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void avarageTime(int n, int ta[], char s[]){
    int totalTime = 0;
    float avarageTime = 0;
    for(int i=0; i<n; i++){
        totalTime = totalTime + ta[i]; 
    }
    
    avarageTime = (float)totalTime/n;
    printf("Total avarage %s time is: %.2f \n",s,avarageTime);
}

void sjfArraySort(int n, int bt[]){
    int i, j, temp;

    for(i=0; i<n; i++)
    {
        
        for(j=i+1; j<n; j++)
        {
            
            if(bt[i] > bt[j])
            {
                temp     = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }

}
void findWaiingTime(int n, int bt[]){
    int wt[n];
    int tt[n];
    wt[0]=0;
    int i;
    for (i=1; i<n; i++){
        wt[i]=bt[i-1]+wt[i-1];
    }
    for (i=0; i<n; i++){
        tt[i] = bt[i]+wt[i];
    }
    printf("Process | \t BT | \tWT | \t TT\n");
    for(i=0; i<n; i++){
        printf(" %d",(i+1));
        printf("\t\t %d",bt[i]);
        printf("\t %d",wt[i]);
        printf("\t %d",tt[i]);
        printf("\n");
    }
    
    avarageTime(n, wt, "Waiting");
    avarageTime(n, tt, "Turn Around Time");
}

int main()
{
    int priority[] = {3,2,1};
    int burst_time[] = {10,5,8};
    
    int n = 3;
    
    findWaiingTime(n,burst_time);

    return 0;
}
