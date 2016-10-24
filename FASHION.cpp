/*
 * Coder : Vimal Yooo
 * Problem : FASHION.cpp
 * Type : ad-hoc, sorting
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

void swap_(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	}
	
void bubble_sort(int arr[],int n){
	for(int i=0; i<n-1; i++){
		bool swapped = false;
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1])swap_(&arr[j],&arr[j+1]),swapped=true;
			}
		if(!swapped)break;
		}
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int man[n],woman[n],i,ans=0;
		for(i=0; i<n; i++)cin>>man[i];
		for(i=0; i<n; i++)cin>>woman[i];
		bubble_sort(man,n);
		bubble_sort(woman,n);
		for(i=0; i<n; i++){
			ans += man[i] * woman[i];
			}
		cout<<ans<<endl;
		}
	return 0;
	}

