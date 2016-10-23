/*
 * Coder : Vimal Yooo
 * Problem : FCTRL2.cpp
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
		int n,i,sol[N],k=0,sz=1,carry=0;
		sol[0]=1;
		cin>>n;
		for(i=2; i<=n; i++){
			k = 0;
			carry = 0;
			int szz = sz;
			for(int j=1; j<=szz; j++){
				int temp = sol[k];
				sol[k] = ( sol[k] * i + carry ) % 10;
				carry = ( temp * i + carry ) / 10;
				k++;
				}
			if(carry){
				while(carry){
					sol[k] = carry % 10;
					sz++;k++;
					carry = carry / 10;
					}
				}
			}
		for(i=sz-1;i>=0;i--){
			cout<<sol[i];
			}
		cout<<endl;
		}
	return 0;
	}

