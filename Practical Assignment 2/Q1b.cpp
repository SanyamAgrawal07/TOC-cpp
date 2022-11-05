#include<bits/stdc++.h>
using namespace std;

vector <vector <int>> solve(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=0;
	vector <vector <int>> v={{1,4},{4,2},{3,4},{4,3},{4,4}};
	for(int i=0 ; i<n ; i++){
		if(s[i]=='a'){
			cur=v[cur][0];
		}
		else{
			cur=v[cur][1];
		}
	}
	// bool state0=true;
	// bool state1=false;
	// bool state2=false;
	// bool state3=false;
	// bool trap=false;
	// for(int i=0 ; i<n ; i++){
	// 	if(state0){
	// 		if(s[i]=='a'){
	// 			state1=true;
	// 			state0=false;
	// 		}
	// 		else{
	// 			trap=true;
	// 			state0=false;
	// 		}
	// 	}
	// 	else if(state1){
	// 		if(s[i]=='a'){
	// 			trap=true;
	// 			state1=false;
	// 		}
	// 		else{
	// 			state2=true;
	// 			state1=false;
	// 		}
	// 	}
	// 	else if(state2){
	// 		if(s[i]=='a'){
	// 			state2=false;
	// 			state3=true;
	// 		}
	// 		else{
	// 			trap=true;
	// 			state2=false;
	// 		}
	// 	}
	// 	else if(state3){
	// 		if(s[i]=='a'){
	// 			trap=true;
	// 			state3=false;
	// 		}
	// 		else{
	// 			state3=true;
	// 		}
	// 	}
		// else{
		// 	cout<<"Rejected!\n";
		// 	return;
		// }
	// }
	if(cur==3){
		cout<<"Accepted!\n";
	}
	else{
		cout<<"Rejected!\n";
	}
	return v;
}
 
int main(){
   // cout<<"Enter no.of strings to be checked\n";
   // int t;
   // cin>>t;
   // while(t--){
	vector <vector <int>> dfa_table;
   dfa_table=solve();
   cout<<"State    "<<"a    b";
   cout<<"\n";
   for(int i=0 ; i<5 ; i++){
   	cout<<"State "<<i<<"  ";
   	for(int j=0 ; j<2 ; j++){
   		cout<<dfa_table[i][j]<<"    ";
   	}
   	cout<<"\n";
   }
   // }
   return 0;
}