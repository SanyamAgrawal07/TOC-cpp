#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<bool> vb;
#define pb push_back
#define all(x) x.begin(),x.end()

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	bool state0=true;
	bool state1=false;
	bool state2=false;
	for(int i=0 ; i<n ; i++){
		if(state0){
			if(s[i]=='a'){
				state1=true;
				state0=false;
			}
			else{
				state2=true;
				state0=false;
			}
		}
		else if(state1){
			if(s[i]=='a'){
				state2=true;
				state1=false;
			}
			else{
				state1=true;
			}
		}
		else{
			if(s[i]=='a'){
				state1=true;
				state2=false;
			}
			else{
				state2=true;
			}
		}
	}
	if(state2){
		cout<<"Accepted!\n";
	}
	else{
		cout<<"Rejected!\n";
	}
}
 
int main(){
   cout<<"Enter no.of strings to be checked\n";
   int t; 
   cin>>t;
   while(t--){
       solve();
   }
   return 0;
}