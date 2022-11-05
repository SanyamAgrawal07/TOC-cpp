#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	int cur=0;
	vector <vector <int>> v={{1,2,0},{6,3,4},{1,4,5},{1,4,5},{6,6,6},{1,2,0},{6,6,6}};
	for(int i=0 ; i<n ; i++){
		if(s[i]=='a'){
			cur=v[cur][0];
		}
		else if(s[i]=='b'){
			cur=v[cur][1];
		}
		else{
			cur=v[cur][2];
		}
	}
	if(cur==4 || cur==2){
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