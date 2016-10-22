/*
 * Coder : Vimal Yooo
 * Problem : ONP.cpp
 * Type : ad-hoc, stack
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

class Stack{
	private :
		char arr[N];
		int top;
	public :
		Stack(){//constructor
			top = -1;
			}
		void push(int ele){
			if(top==N){
				return ;
				}
			arr[++top] = ele;
			}
		char pop(){
			if(top==-1){
				return '!';
				}
			return arr[top--];
			}
		bool is_empty(){
			return (top==-1);
			}
		int size_(){
			return top+1;
			}
		char getTop(){
			if(is_empty())return '!';
			return arr[top];
			}
		void print(){
			for(int i=0; i<=top; i++){
				cout<<top<<spc;
				}
			}
	};

bool isAlpha(char ch){
	return ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'));
	}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		Stack st;
		string str,ans="";
		cin>>str;
		int i,len=str.length();
		for(i=1;i<len;i++){
			if(str[i]==')'){
				char ele;
				ele = st.pop();
				if(ele!='!')ans+=ele;
				}
			else if(str[i]!='('){
				if(isAlpha(str[i])){
					ans+=str[i];
					}
				else{
					st.push(str[i]);
					}
				}
			}
		cout<<ans<<endl;
		}
	return 0;
	}
