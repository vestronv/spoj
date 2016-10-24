/*
 * Coder : Vimal Yooo
 * Problem : CANDY.cpp
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

#define N 10005
int arr[N];

int main(){
	int n;
	cin>>n;
	while(n!=-1){
		int i,sum=0,ele;
		for(i=0; i<n; i++){
			cin>>ele;
			sum += ele;
			arr[i] = ele;
			}
		if(sum%n!=0){
			cout<<"-1"<<endl;
			}
		else{
			int avg = sum/n,ans=0;
			for(i=0;i<n;i++){
				if(arr[i] > avg){
					ans += arr[i]-avg;
					}
				}
			cout<<ans<<endl;
			}
		cin>>n;
		}
	return 0;
	}

