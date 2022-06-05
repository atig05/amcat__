#include<bits/stdc++.h>
using namespace std;
int PS(vector<int> ar,vector<int> tt,vector<int> pr){
	int n=ar.size();
	priority_queue<pair<int,int > > q;
	vector<int> ttt(n,0);
	for(int i=0;i<n;i++) ttt[i]=tt[i];
	int timer=0;
	timer=ar[0];
	int cp=0;
	q.push({-pr[cp],cp});
	cp++;
	vector<int> ct(n,0);
	vector<int> wt(n,-1);
	while(true){
		bool f=false;
		for(int  i=0;i<n;i++){
			if(ttt[i]>0) f=true;
			
		}
		if(f==false) break;
		while(q.size()==0){
			cout<<" fuck2"<<endl;
			if(cp>=n){
				break;	
			} 
			if(cp<n and ar[cp]>=timer){
				q.push({-pr[cp],cp});
				cp++;	
			} 
			timer++;
		}
		int size=q.size();
		if(size==0) break;
		int p=q.top().second;
		//cout<<p;
		q.pop();
		int time=ttt[p];
		if(wt[p]==-1){
			wt[p]=timer-ar[p];
		}
		for(int t=0;t<time;t++){
			cout<<p;
			timer++;
			ttt[p]--;
			cout<<" fuck3"<<endl;
			if(cp<n and ar[cp]>=timer){
				q.push({-pr[cp],cp});
				cp++;	
				break;
			} 	
		}
		if(ttt[p]==0) ct[p]=timer;	
		//q.pop();
		else
			q.push({-pr[p],p});	
		//cout<<"fuck1"<<endl;
	}
	int s=0;
	
	for(int i=0;i<n;i++)
		s+=(wt[i]+ct[i]-ar[i]);
	return s/n;
}

int  main(void){
	int n,qt;
	cin>>n;
	vector<int> ar;
	vector<int> tt;
	vector<int> pr;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		ar.push_back(t);
	}
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		tt.push_back(t);
	}
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		pr.push_back(t);
	}	
	cout<<PS(ar,tt,pr);
}
