#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=0;
	vector <vector <int>> v={{0,1},{1,2},{2,2}};
	for(int i=0 ; i<n ; i++){
		if(s[i]=='0'){
			cur=v[cur][0];
		}
		else{
			cur=v[cur][1];
		}
	}
	if(cur==1){
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