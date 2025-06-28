#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
	int n;
	cin >> n;
	vector <pair<int,int>> arr(n);
	for(int i =0; i<n; i++){
		int a,b;
		cin >> a >> b;
		arr.push_back({a,1});
		arr.push_back({b,-1});
	}
	sort(arr.begin(),arr.end());
	int cur=0;
	int maxcos = INT_MIN;
	for(auto cos : arr){
		cur += cos.second;
		maxcos = max(maxcos,cur);
	}
	cout << maxcos;
	
