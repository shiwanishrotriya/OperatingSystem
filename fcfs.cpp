#include<iostream>
using namespace std;
int main()
{
	int n,i,twt=0,ttat=0;
	float awt,atat;
	cout<<"Enter number of processes : ";
	cin>>n;
	float at[n],bt[n],ct[n],tat[n],wt[n];
	for(i=1;i<=n;i++)
	{
	cout<<"Process "<<i<<endl;
	
	//Considering arival time for all processes 0
	cout<<"Enter Burst Time :";
	cin>>bt[i];
	}
	
	wt[1]=0;	//waiting time for first process is 0
	for(i=1;i<=n;i++)
	{
		wt[i+1]=wt[i]+bt[i];
	}
		
	for(i=1;i<=n;i++)
	{
		tat[i]=wt[i]+bt[i];
	}

	for(i=1;i<=n;i++)
	{
		twt=twt+wt[i];
		ttat=ttat+tat[i];
		cout<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
	}
	//Average waiting and Turnaround time
	
	awt=twt/n;
	atat=ttat/n;
	
	cout<<"Average Waiting Time is "<<awt<<endl;
	cout<<"Average Turnaround Time is "<<atat;
	
	return 0;
	
}