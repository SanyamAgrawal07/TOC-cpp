#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=0;
	vector <vector <int>> v={{1,2},{3,2},{4,2},{3,5},{8,7},{4,6},{4,6},{4,4},{8,8}};
	for(int i=0 ; i<n ; i++){
		if(s[i]=='a'){
			cur=v[cur][0];
		}
		else{
			cur=v[cur][1];
		}
	}
	if(cur==4 || cur==3 || cur==5 || cur==6){
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