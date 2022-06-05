#include<bits/stdc++.h>
using namespace std;

int rr(int arrival[],int bt[],int n,int qt){
	vector<int> tbt(n,0);
	for(int  i=0;i<n;i++) 
		tbt[i]=bt[i];
	int timer=arrival[0];
//	cout<<arrival[0];
	int ct[n],wt[n];
	for(int i=0;i<n;i++) ct[i]=wt[i]=0;
	queue<int> q;
	q.push(0);
	int jat=1;
	while(true){
		bool f=true;
		for(int i=0;i<n;i++){
			if(tbt[i]!=0) f=false;
		}
		//cout<<"fuck1"<<endl;
		if(f) break;
		int size=q.size();
		while(q.size()==0){
			//timer++;
			cout<<"ff";
			if(jat>=n) break;
			if(jat<n and timer>=arrival[jat]){
				q.push(jat);
				jat++;
			}
			timer++;			
		}
		while(size--){
			int c=0;
			int job=q.front();
			q.pop();
			//cout<<job+1<<" "<<timer<<endl;
			int time=tbt[job];
			for(int temp=0;tbt[job]!=0 and temp<qt;temp++){
			//	cout<<"fuck3"<<endl;
				
				tbt[job]-=1;
				c++;
				timer+=1;
				if(jat<n and timer>=arrival[jat]){
					q.push(jat);
					jat++;
				}
			}
			if(tbt[job]!=0)
				q.push(job);
			else{
				ct[job]=timer;
				wt[job]=(ct[job]-bt[job])-arrival[job];
			} 
		}	
	}
	for(int i=0;i<n;i++) cout<<ct[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<wt[i]<<" ";
	cout<<endl;
	return timer;
}
/*

6
4
4 5 2 1 6 3
0 1 2 3 4 5
*/
int  main(void){
	int n,qt;
	cin>>n;
	cin>>qt;
	int arrival[n],bt[n];
	for(int i=0;i<n;i++) 
	cin>>bt[i];
	for(int i=0;i<n;i++) 
	cin>>arrival[i];
	cout<<rr(arrival,bt,n,qt);
}
