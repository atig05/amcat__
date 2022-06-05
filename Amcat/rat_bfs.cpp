#include<bits/stdc++.h>
using namespace std;
/*
8
1 0 1 1 1 0 0 0
1 0 0 0 1 1 1 0
1 0 1 0 9 0 1 1
1 1 1 0 1 0 0 1
1 0 1 0 1 1 0 0 
1 0 0 0 1 1 0 1
1 0 0 0 0 1 0 0
1 1 1 1 1 1 1 0
	}
}*/
bool cc(vector<vector<int > > &maze,int n){
	queue<pair<int,int > > q;
	if(n==0 or maze[0][0]==0) return false;
	q.push({0,0});
	while(!q.empty()){
		pair<int,int> t=q.front();
		int i=t.first;
		int j=t.second;
		if(maze[i][j]==9) return true;
		if(i+1<n and maze[i+1][j]!=0) q.push({i+1,j});
		if(j+1<n and maze[i][j+1]!=0) q.push({i,1+j});
		if(i-1>-1 and maze[i-1][j]!=0) q.push({i-1,j});
		if(j-1>-1 and maze[i][j-1]!=0) q.push({i,j-1});
		q.pop();
	}
	return false;
}
int main(void){
	int n;
	cin>>n;
	vector<vector<int > > maze;
	for(int i=0;i<n;i++){
		vector<int> t;
		for(int j=0;j<n;j++){
			int te;
			cin>>te;
			t.push_back(te);
		}
		maze.push_back(t);
	}
	cout<<cc(maze,n);
}
