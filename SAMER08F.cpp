/*
 * Coder : Vimal Yooo
 * Problem : SAMER08F.cpp
 * Type : ad-hoc
 * */
#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(0);
#define szo(x) sizeof(x)
#define SET(x,val) memset(x,val,szo(x))
#define endl "\n"
#define spc " "
#define ll long long
#define inf 1e9
#define infl 1e18

#define N 505

int main(){
	int n;
	cin>>n;
	while(n!=0){
		int i,ans=0;
		for(i=1; i<=n; i++){
			ans += (i*i);
			}
		cout<<ans<<endl;
		cin>>n;
		}
	return 0;
	}
