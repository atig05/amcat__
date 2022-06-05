#include<bits/stdc++.h>
using namespace std;
int strc(string str1,string str2){

	queue<pair<string, int > > q;
	set<string> s;
	
	q.push({str1,2});
	s.insert(str1);
	while(!q.empty())
	{
	    pair<string,int> p=q.front();
	    q.pop();
	    if(p.first==str2)
	    {
	        return p.second-2;
	       // return 0;
	    }
	    if(p.second<=p.first.size())
	    {
	        for(int i=0;i<=p.first.size()-p.second;i++)
	        {
	            string x=p.first;
	            reverse(x.begin()+i,x.begin()+i+p.second);
	            if(s.find(x)==s.end())
	            {
	                q.push({x,p.second+1});
	                s.insert(x);
	            }
	
	        }
	    }
	}
	cout<<-1;
}
int main(){
	string str1,str2;
	cin>>str1;
	cin>>str2;
	
	cout<<strc(str1,str2);
}
