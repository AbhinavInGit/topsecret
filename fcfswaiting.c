//FCFS (With arrival time    )

#include<stdio.h>

void main(){
          int proc,temp,s=0; 
          printf("Enter the number of process : "); 
          scanf("%d", &proc); 
          int bt[proc],at[proc],p[proc],wt[proc],tt[proc];
          for(int i =0; i<proc; i++){
          printf("\nEnter the process number :");
          scanf("%d", &p[i]);
          printf("Enter the arrival time of P(%d): ",p[i]);
          scanf("%d", &at[i]); 
          printf("Enter the Burst time of P(%d): ", p[i]);
          scanf("%d", &bt[i]); 
          }
          
          //SOrting the BT
          for(int i=0; i<proc; i++){
                    for(int j= 0; j<proc-i; j++){
                              if(at[j]>at[j+1])
                                        {
                                                  temp=p[j+1];
                                                  p[j+1]=p[j];
                                                  p[j]=temp;
                                                  
                                                  temp=at[j+1];
                                                  at[j+1]=at[j];
                                                  at[j]=temp;
                                                  
                                                   temp=bt[j+1];
                                                  bt[j+1]=bt[j];
                                                  bt[j]=temp;
                                        }                                                       
                               }
         
          }
       //   for(int i=0; i<proc; i++){
       //             printf("%d\t", BT[i]);
        //  }
          for(int i=1; i<proc ; i++){
                    s = s + bt[i-1]; 
                    wt[i] = s - at[i];
          }
          for(int i=1; i<proc ; i++){
                    tt[i] = bt[i]+wt[i];
          }
        
          printf("|P\t|BT\t|AT\t|WT\t|TT\t|\n");
          for(int i=0; i<proc ; i++){
                    printf("|%d\t|%d\t|%d\t|%d\t|%d\t\n",p[i],bt[i], at[i], wt[i],tt[i]);
          }
          
          
}
