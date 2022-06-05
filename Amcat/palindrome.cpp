#include <bits/stdc++.h>
using namespace std;
 
// Returns minimum number of count operations
// required to make arr[] palindrome
vector<int> fuck(vector<int> arr, int n)
{
    int ans = 0; // Initialize result
 	vector<int> a;
 	set<int> st;
 	int i=0,j=n-1;
    // Start from two corners
    int c=0;
    int e=1;
    while( i<=j)
    {
    	//cout<<i<<" "<<j<<endl;
        // If corner elements are same,
        // problem reduces arr[i+1..j-1]
        if (arr[i] == arr[j])
        {	
			a.insert(a.begin()+c,arr[i]);
        	c++;
        	if(i!=j)
        		a.insert(a.end()-e,arr[j]);
        	e++;
            i++;
            j--;
           // cout<<"fuck";
        }
 
        // If left element is greater, then
        // we merge right two elements
        else if (arr[i] > arr[j])
        {
            // need to merge from tail.
            j--;
            arr[j] += arr[j+1] ;
            ans++;
            st.insert(j+1);
        }
 
        // Else we merge left two elements
        else
        {
            i++;
            arr[i] += arr[i-1];
            ans++;
            
        }
    }
    
 	for(int i=0;i<n;i++){
 	//	cout<<arr[i]<<" ";
 		
 	}
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
    return a;
}
 
// Driver program to test above
int main()
{	int n;
	cin>>n;
    vector<int> arr;
    	for(int i=0;i<n;i++){
    		int tit;
			cin>>tit;
			arr.push_back(tit);
    	}
    	
    fuck(arr,n);
	//for(int i=0;i<n;i++)
	//	cout<<arr[i]<<" ";
    return 0;
}
