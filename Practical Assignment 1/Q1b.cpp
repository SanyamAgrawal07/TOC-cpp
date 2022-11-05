#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	bool state0=true;
	bool state10=false;
	bool state01=false;
	bool state11=false;
	bool state20=false;
	bool state02=false;
	bool state21=false;
	bool state12=false;
	bool state22=false;
	for(int i=0 ; i<n ; i++){
		if(state0){
			if(s[i]=='a'){
				state10=true;
				state0=false;
			}
			else{
				state01=true;
				state0=false;
			}
		}
		else if(state10){
			if(s[i]=='a'){
				state20=true;
				state10=false;
			}
			else{
				state11=true;
				state10=false;
			}
		}
		else if(state01){
			if(s[i]=='a'){
				state11=true;
				state01=false;
			}
			else{
				state02=true;
				state01=false;
			}
		}
		else if(state11){
			if(s[i]=='a'){
				state21=true;
				state11=false;
			}
			else{
				state12=true;
				state11=false;
			}
		}
		else if(state20){
			if(s[i]=='a'){
				state0=true;
				state20=false;
			}
			else{
				state21=true;
				state20=false;
			}
		}
		else if(state02){
			if(s[i]=='a'){
				state12=true;
				state02=false;
			}
			else{
				state0=true;
				state02=false;
			}
		}
		else if(state21){
			if(s[i]=='a'){
				state01=true;
				state21=false;
			}
			else{
				state22=true;
				state21=false;
			}
		}
		else if(state12){
			if(s[i]=='a'){
				state22=true;
				state12=false;
			}
			else{
				state10=true;
				state12=false;
			}
		}
		else if(state22){
			if(s[i]=='a'){
				state02=true;
				state22=false;
			}
			else{
				state20=true;
				state22=false;
			}
		}
	}
	if(state22 || state0 || state11){
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