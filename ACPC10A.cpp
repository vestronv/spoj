/*
 * Coder : Vimal Yooo
 * Problem : ACPC10A.cpp
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

#define N 405
	
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	while(!(a==0 && b==0 && c==0)){
		if(b-a == c-b){
			cout<<"AP "<<c + b-a<<endl;
			}
		else{
			cout<<"GP "<<(c*b)/(a)<<endl;
			}
		cin>>a>>b>>c;
		}
	return 0;
	}
