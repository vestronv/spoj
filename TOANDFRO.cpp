/*
 * Coder : Vimal Yooo
 * Problem : TOANDFRO.cpp
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

#define N 25
char mat[N][N];

int main(){
	int n;
	cin>>n;
	while(n!=0){
		string enc;
		cin>>enc;
		int i,k=-1,len=(int)enc.length();
		for(i=0; i<len; i++){
			if(i%n==0)++k;
			int pos = i/n;
			if(pos&1)pos = n-i%n-1;
			else pos = i%n;
			mat[k][pos] = enc[i];
			}
		for(i=0; i<n; i++){
			for(int j=0; j<=k; j++){
				cout<<mat[j][i];
				}
			}
		cout<<endl;
		cin>>n;
		}
	return 0;
	}
