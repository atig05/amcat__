#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<vector<int> > graph;
vector<bool> vis;
vector<int> king;
int dfs(int src, int &ans)
{
	vis[src]=true;
	for(int i=0; i<(int)graph[src].size(); ++i)
	{
		int it=graph[src][i];
		if(vis[it]==false && king[src]!=king[it])
			return ans=max(ans, 1+dfs(it, ans));
	}
	return 1;
}
int main()
{
	int n, m;
	cin>>n>>m;
	king.resize(n);
	for(int i=0; i<n; i++)
	{
		cin>>king[i];
	}
	vector<pair<int, int> > edg;
	for(int i=0; i<m; ++i)
	{
		int x, y;
		cin>>x>>y;
		edg.push_back({x, y});
	}
	graph.resize(n, vector<int>(n));
	vis.resize(n, false);
	for(int i=0; i<(int)edg.size(); ++i)
	{
		graph[edg[i].first-1].push_back(edg[i].second-1);
	}
	int ans=0;
	dfs(0, ans);
	cout<<ans;
}
