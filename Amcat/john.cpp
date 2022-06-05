   #include<bits/stdc++.h>
using namespace std;
    int ff(int target, int cur, vector<vector<int > > s) {
        int i = 0, res;
        priority_queue<int>pq;
        for (res = 0; cur < target; res++) {
            while (i < s.size() && s[i][0] <= cur)
                pq.push(s[i++][1]);
            if (pq.empty()) return -1;
            cur += pq.top(), pq.pop();
        }
        return res;
    }
    
    int main(){
    	int n;
    	cin>>n;
    	vector<int> fuck;
    	vector<int> fuck2;
    	vector<vector<int> > s;
    	for(int i=0;i<n;i++){
    		int tit;
			cin>>tit;
			fuck.push_back(tit);
    	}
    	for(int i=0;i<n;i++){
    		int tit;
			cin>>tit;
			fuck2.push_back(tit);
    	}    	
    	for(int i=0;i<n;i++){
    		vector<int> tt;
    		tt.push_back(fuck[i]);
    		tt.push_back(fuck2[i]);
    		s.push_back(tt);
    	}
    
    	int target;
    	cin>>target;
    		int strt;
    	cin>>strt;
    	cout<<ff(target,strt,s);
    }
