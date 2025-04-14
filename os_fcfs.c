#include<stdio.h>


void main()
{	
	char c[10]={'A','B','C','D','E','F','G','H','I','J'};
	float num; 	
	int BT[10], TT[10], WT[10];
	printf("Enter the number of Process :\n"); 
	scanf("%f", &num); 

	for(int i=0; i<num; i++)
	{
		printf("Enter the %dth burst time ", i); 
		scanf("%d", &BT[i]); 
	} 
	
	//waiting time 
	 
	for(int i=1; i<=num; i++)
	{
		WT[0] = 0;
		WT[i] = WT[i-1]+BT[i-1]; 
	}

	//print waiting time
	printf("*********************************\n");
	for(int i=0; i<num; i++)
	{
		printf("The %dth waiting time is : %d\n", i,WT[i]); 
	}
	//Average waiting time 
	int sum=0; 
	for(int i=0; i<num; i++)
	{
		sum = sum + WT[i]; 
	}
	
	printf("The average waiting time is : %.2f\n", sum/num); 
	printf("*********************************\n"); 
	//Turn around time : 
	for(int i=0; i<num; i++)
	{
		TT[i] = WT[i] + BT[i]; 
		printf("\nthe %dth Turn Around time is : %d", i, TT[i]); 

	}
	//Average tt time : 
	int sum2=0;
	for(int i=0; i<num; i++){
		sum2 = sum2 + TT[i]; 
	}
	
	printf("\nThe average tt time is : %.2f\n", sum2/num);


	//Tabular 
	printf("******************************\n");
	printf("********TABULAR FORM**********\n"); 
	printf("Process\tBT\tWT\tTT");
	for(int i=0; i<num; i++)
	{
	printf("\n%c\t%d\t%d\t%d\n", c[i], BT[i], WT[i], TT[i]); 
	}
	printf("\nThe average tt time is : %.2f\n", sum2/num);
	printf("\nThe average waiting time is : %.2f\n", sum/num); 
	 




	 
}