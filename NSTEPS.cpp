/*
 * Coder : Vimal Yooo
 * Problem : NSTEPS.cpp
 * Type : ad-hoc, implementation
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

#define N 2005

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(x!=y && ((x-y)!=2)){
			cout<<"No Number\n";
			}
		else{
			if(x==y){
				if(x&1)cout<<x*2-1;
				else cout<<x*2;
				}
			else{
				if(x&1)cout<<2*(x-1)-1;
				else cout<<2*(x-1);
				}
			cout<<endl;
			}
		}
	return 0;
	}
