/*
 * Coder : Vimal Yooo
 * Problem : FCTRL.cpp
 * Type : ad-hoc, math
 * */
#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(0);
#define szo(x) sizeof(x)
#define SET(x,val) memset(x,val,szo(x))
#define endl "\n"
#define ll long long
#define inf 1e9
#define infl 1e18

#define N 10000001
	
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ans=0,five=5;
		cin>>n;
		while(n>=five){
			ans += n/five;
			five = five * 5;
			}
		cout<<ans<<endl;
		}
	return 0;
	}
