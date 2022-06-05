#include <bits/stdc++.h>
using namespace std;
int minPrice(){
	int n, M1, P1, M2, P2;
	cin >> n >> M1 >> P1 >> M2 >> P2;

	int mini = INT_MAX;
	
	for (int i=0; M1*i <= n; i++) 
	{
		int rem = n - i*M1;
		if (rem%M2 == 0) 
		{
			int cost = P1 * i + P2 * (rem/M2);
			mini = (cost < mini or mini == -1) ? cost : mini;
		}
	}
	
	if (mini != -1)
		cout << mini;
	else
		cout << "Invalid inputs";
}
int main() {
    minPrice();

		
}
