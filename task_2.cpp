#include <bits/stdc++.h>
using namespace std;

void efficientJanitor(float weight[], int n) {
	int count = 0;
	int i = 0;
	int j = n - 1;
	
	sort(weight, weight+n);
	
	while(i <= j) {
		count += 1;
		if(weight[i] + weight[j] <= 3) {
			i += 1;
		} 
		j -= 1;
	}
	cout<<count;
}
int main() {
	
	int n = 0;
	cin>>n;
	float weight[n] = {0};
	for(int i = 0; i<n; i++) {
		cin>>weight[i];
	}
	efficientJanitor(weight, n);
	return 0;
}
