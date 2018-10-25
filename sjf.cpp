#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,t=0,t_wt=0,t_tat=0;
	float awt,atat;
	cout<<"Enter number of processes  ";
	cin>>n;
	int bt[n],ct[n],tat[n],wt[n];
	
	//Considering arrival time of all processes to be zero
	
	cout<<"Enter burst time"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Process "<<i<<" : ";
		cin>>bt[i];
	}
	
	
	sort(bt,bt+n);

	
	for(i=0;i<n;i++)
	{
		t=t+bt[i]; 
		ct[i]=t; 
		tat[i]=ct[i];  
	}
	wt[0]=0;
	
	for(i=0;i<n;i++)
	{
		wt[i+1]=wt[i]+bt[i];
	}
	
	for(i=0;i<n;i++)
	{
		t_wt=t_wt+wt[i];
		t_tat=t_tat+tat[i];
	}
	
	cout<<"Burt\tCompletion\tTurnAround\tWaiting"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<bt[i]<<"\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
	}
	
	awt=t_wt/n;
	atat=t_tat/n;
	cout<<"Average Waitng Time is "<<awt<<endl;
	cout<<"Avergae TurnAround Time is "<<atat;
	
	return 0;
}