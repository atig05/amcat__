#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum_prime(int a,int b){
	int x=max(abs(a),abs(b));
	vector<bool> ar(x+1,true);
	ar[1]=false;
	ar[2]=true;
	ar[3]=true;
	for(int i=2;i<x+1;i++){
		for(int j=i+i;j<x+1;j+=i)
			ar[j]=false;
	}
	int f=0,s;
	for(int i=a;i<=b;i++){
		if(f==0 and  ar[abs(i)]) f=i;
		if(ar[abs(i)]) s=i;
	}
	return f+s;
}
int main(void){
	int a,b;
	cin>>a>>b;
	cout<<sum_prime(a,b);
}
