#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	bool state0=true;
	bool state1=false;
	bool state2=false;
	bool state3=false;
	bool trap=false;
	for(int i=0 ; i<n ; i++){
		if(state0){
			if(s[i]=='0'){
				state1=true;
				state0=false;
			}
			else{
				state0=true;
			}
		}
		else if(state1){
			if(s[i]=='0'){
				state2=true;
				state1=false;
			}
			else{
				state0=true;
				state1=false;
			}
		}
		else if(state2){
			if(s[i]=='0'){
				state2=false;
				trap=true;
			}
			else{
				state2=false;
				state3=true;
			}
		}
		else if(state3){
			if(s[i]=='0'){
				state2=true;
				state3=false;
			}
			else{
				state3=true;
			}
		}
		else{
			cout<<"Rejected!\n";
			return;
		}
	}
	if(state2 || state0 || state3){
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