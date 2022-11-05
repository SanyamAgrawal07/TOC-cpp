#include<bits/stdc++.h>
using namespace std;

// NFA
//		   0		   1
//q0		q0q1		q0
//q1		-			q2
//q2		-			-

// DFA
//		   0		   1
//q0		q0q1		q0
//q0q1	q0q1		q0q2
//q0q2	q0q1		q0
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
				state3=true;
				state0=false;
			}
		}
		else if(state1){
			if(s[i]=='0'){
				state1=true;
			}
			else{
				state2=true;
				state1=false;
			}
		}
		else if(state2){
			if(s[i]=='0'){
				state1=true;
				state2=false;
			}
			else{
				trap=true;
				state2=false;
			}
		}
		else if(state3){
			if(s[i]=='0'){
				state1=true;
				state3=false;
			}
			else{
				trap=true;
				state3=false;
			}
		}
		else{
			cout<<"Rejected!\n";
			return;
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