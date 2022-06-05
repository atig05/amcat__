#include<bits/stdc++.h>
using namespace std;
int hardfuck(vector<int> &easy,vector<int> &hard,int i){
//	cout<<"fuck"<<endl;
	if(i<=0){
		return 0;
	}
	return max(hardfuck(easy,hard,i-2)+hard[i-1],hardfuck(easy,hard,i-1)+easy[i-1]);
}
int fuck(int n,vector<int> easy,vector<int> hard){
	vector<int> dp(n+1,0);
	dp[1]=hard[0];
	for(int i=2;i<=n;i++)
		dp[i]=max(hard[i-1]+dp[i-2],easy[i-1]+dp[i-1]);
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	vector<int> easy;
	vector<int> hard;
	for(int i=0;i<n;i++){
		int tit,ass;
		cin>>tit>>ass;
		easy.push_back(tit);
		hard.push_back(ass);
	}
	cout<<fuck(n,easy,hard);
}
