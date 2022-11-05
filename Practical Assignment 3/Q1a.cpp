#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=0;
	vector <vector <int>> v={{1,2},{3,4},{4,5},{3,6},{6,7},{7,8},{6,9},{9,10},{10,8},{9,11},{11,10},{11,11}};
	for(int i=0 ; i<n ; i++){
		if(s[i]=='0'){
			cur=v[cur][0];
		}
		else{
			cur=v[cur][1];
		}
	}
	if(cur==3 || cur==5 || cur==6 || cur==7 || cur==9 || cur==11){
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