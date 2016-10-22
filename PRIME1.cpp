/*
 * Coder : Vimal Yooo
 * Problem : PRIME1.cpp
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

#define N 1000000001

bool is_prime[N];

void init(){
	SET(is_prime,true);
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<N;i++){
		if(is_prime[i]){
			for(int j=i+i;j<N;j+=i){
				is_prime[j]=false;
				}
			}
		}
	}
bool prime(int n){
	if(n==2 || n==3)return true;
	if(n<5)return false;
	for(int i=2;i<sqrt(n)+1;i++){
		if(n%i == 0)return false;
		}
	return true;
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(prime(i)){
				cout<<i<<endl;
				}
			}
		cout<<endl;
		}
	return 0;
	}
