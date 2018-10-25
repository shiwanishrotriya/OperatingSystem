#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter number of processes ";
	cin>>n;
	int bt[n],rbt[n],wt[n],tat[n];
	int t_wt=0,t_tat=0,tbt=0,tq,flag=0,t=0;
	float awt,atat;
	
	cout<<"Enter Burst Time "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Process "<<i<<": ";
		cin>>bt[i];
		rbt[i]=bt[i];
		tbt=tbt+bt[i];
	}
		
		cout<<"Enter Time Quantum : ";
		cin>>tq;
		
	while(true)
	{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(rbt[i]==0)
			flag++;
		}
			if(flag==n)
			break;
		for(i=0;i<n;i++)
		{
			if(rbt[i]<=tq && rbt[i]!=0)
				{
					t=t+rbt[i];
					rbt[i]=0;
					wt[i]=t-bt[i];
					tat[i]=wt[i]+bt[i];
				}
			
			else if(rbt[i]>tq)
				{
					t=t+tq;
					rbt[i]=rbt[i]-tq;
				}
		}
		tbt=tbt-tq;
	}
	
	for(i=0;i<n;i++)
	{
		t_wt=t_wt+wt[i];
		t_tat=t_tat+tat[i];
	}
	cout<<"Burst\tWaiting\tTurnAround"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<bt[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
	}
	awt=t_wt/n;
	atat=t_tat/n;
	cout<<"Average Waiting Time is "<<awt<<endl;
	cout<<"Average TurnAroundTime is "<<atat;	

}