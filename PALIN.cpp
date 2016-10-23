/*
 * Coder : Vimal Yooo
 * Problem : PALIN.cpp
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

bool all9(string num){
	for(int i=0;i<(int)num.length();i++)
		if(num[i]!='9')return false;
	return true;
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int i,len=(int)n.length();
		if(all9(n)){
			cout<<"1";
			for(i=0;i<len-1;i++)cout<<"0";
			cout<<"1\n";
			}
		else if(n.length()==1){
			cout<<"11\n";
			}
		else{
			int lstart = len/2-1,flag=0;
			int rstart = lstart+1+(len%2);
			for(i=lstart;i>=0;i--){
				if(n[lstart]==n[rstart]){
					lstart--;
					rstart++;
					}
				}
			if(lstart<0 || n[lstart]<n[rstart])flag=1;
			while(lstart>=0){
				n[rstart]=n[lstart];
				lstart--;
				rstart++;
				}
			if(flag){
				int carry = 1;
				lstart = len/2-(len+1)%2;rstart = lstart + (len+1)%2;
				while(lstart>=0){
					if(carry){
						n[lstart]++;
						if(n[lstart]==':')n[lstart]='0',carry = 1;
						else carry = 0;
						if(lstart!=rstart){
							n[rstart]=n[lstart];
							}
						lstart--;
						rstart++;
						}
					else{
						n[rstart++]=n[lstart--];
						}
					}
				}
			cout<<n<<endl;
			}
		}
	return 0;
	}
