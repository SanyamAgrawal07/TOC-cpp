#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=0;
	vector <vector <int>> v={{1,0},{2,1},{2,2}};
	for(int i=0 ; i<n ; i++){
		if(s[i]=='0'){
			cur=v[cur][0];
		}
		else{
			cur=v[cur][1];
		}
	}
	// bool state0=true;
	// bool state1=false;
	// bool state2=false;

	// for(int i=0 ; i<n ; i++){
	// 	if(state0){
	// 		if(s[i]=='0'){
	// 			state1=true;
	// 			state0=false;
	// 		}
	// 		else{
	// 			state0=true;
	// 		}
	// 	}
	// 	else if(state1){
	// 		if(s[i]=='0'){
	// 			state2=true;
	// 			state1=false;
	// 		}
	// 		else{
	// 			state1=true;
	// 		}
	// 	}
	// 	else if(state2){
	// 		if(s[i]=='0'){
	// 			state2=true;
	// 		}
	// 		else{
	// 			state2=true;
	// 		}
	// 	}
	// }
	if(cur==0 || cur==1 || cur==2){
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