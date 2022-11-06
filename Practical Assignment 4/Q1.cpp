#include<bits/stdc++.h>
using namespace std;

map <char,vector<string>> m;
set <vector<string>> finset;
vector <string> temp;
string final="abababa";

void lmd(string s){
	if(s.size()>final.size()) return;

	temp.push_back(s);
	if(s==final){
		finset.insert(temp);
		temp.pop_back();
		return;
	}
	auto it=s.begin();
	for(int i=0 ; i<s.length() ; i++){
		if(s[i]!='a' && s[i]!='b'){
			char var=s[i];
			auto it2=it;
			s.erase(it);
			for(int j=0 ; j<m[var].size() ; j++){
				string s2=s;
				s2.insert(i,m[var][j]);
				// cout<<s2<<endl;
				lmd(s2);
			}
			break;
		}
		it++;
	}
	temp.pop_back();
}

void rmd(string s){
	if(s.size()>final.size()) return;

	temp.push_back(s);
	if(s==final){
		finset.insert(temp);
		temp.pop_back();
		return;
	}
	auto it=s.end();
	it--;
	for(int i=s.length()-1 ; i>=0 ; i--){
		if(s[i]!='a' && s[i]!='b'){
			char var=s[i];
			auto it2=it;
			s.erase(it);
			for(int j=0 ; j<m[var].size() ; j++){
				string s2=s;
				s2.insert(i,m[var][j]);
				// cout<<s2<<endl;
				rmd(s2);
			}
			break;
		}
		it--;
	}
	temp.pop_back();
}

void solve(){
	m['S']={"SbS","a"};
	lmd("S");
	// rmd("S");
	cout<<finset.size()<<endl;
	for(auto it=finset.begin() ; it!=finset.end() ; it++){
		for(int i=0 ; i<(*it).size() ; i++){
			cout<<(*it)[i]<<endl;
		}
	}
}
 
int main(){
   solve();
   return 0;
}