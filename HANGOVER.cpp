/*
 * Coder : Vimal Yooo
 * Problem : HANGOVER.cpp
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

#define N 1000000

int main() {
	double n,ans[N];
	ans[0]=0.00;
	for(int i=1;i<N;i++){
		ans[i]=(ans[i-1] + (1.0/(i+1)));
	}
	cin>>n;
	while(n!=0.00){
		int i;
		for(i=1;i<N;i++){
			if(ans[i]>=n)break;
		}
		cout<<i<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}
