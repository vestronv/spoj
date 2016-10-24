/*
 * Coder : Vimal Yooo
 * Problem : LASTDIG.cpp
 * Type : ad-hoc, modexp
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

#define N 25

int modexp(int base_,int exp){
	int ret = 1;
	while(exp>0){
		if(exp&1)ret *= base_;
		base_*=base_;
		base_%=10;
		ret%=10;
		exp/=2;
		if(!ret)break;
		}
	return ret;
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		int b,exp;
		cin>>b>>exp;
		if(exp==0){
			if(b==0)cout<<"0\n";
			else cout<<"1\n";
			continue;
			}
		if(b==0 || b==1 || b==6 || b==5)cout<<b<<endl;
		else{
			cout<<modexp(b,exp)<<endl;
			}
		}
	return 0;
	}
