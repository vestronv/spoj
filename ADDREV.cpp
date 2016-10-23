/*
 * Coder : Vimal Yooo
 * Problem : ADDREV.cpp
 * Type : ad-hoc
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

int rev(int n){
	int poww = (int)log10(n);
	int ret = 0;
	while(n>0){
		ret += n%10*pow(10,poww);
		poww--;
		n/=10;
		}
	return ret;
	}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int reva = rev(a);
		int revb = rev(b);
		int ans = reva + revb;
		ans = rev(ans);
		cout<<ans<<endl;
		}
	return 0;
	}

