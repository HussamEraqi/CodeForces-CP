#include<bits/stdc++.h>
 #define T     int T; cin>>T; while(T--)
using namespace std;

bool check(string s1,string s2){
     if(s1.size() > s2.size()) return false;

     /*
         s1 = av
         s2 = acxb
     */

     int ind = 0; // 1
     for(int i=0;i<s2.size();i++){ // 3
         if(s1[ind] == s2[i]) ind++;
         if(ind == s1.size()) return true;
     }
     return false;
 }
void solve(){
     string s,t,p; cin>>s>>t>>p;
     if(check(s,t)){
         map<char,int>S1;
         map<char,int>T2;

         for(int i=0; i<s.size(); i++){
             S1[s[i]]++;
         }
         for(int i=0; i<t.size(); i++){
             T2[t[i]]++;
         }for(int i=0; i<p.size(); i++){
             S1[p[i]]++;
         }
         map<char,int>::iterator itr;
         for(itr=T2.begin(); itr!=T2.end(); ++itr){
             char f = itr->first;
             int s = itr->second;
             if(S1[f] < s){
                 cout<<"NO"<<el;
                 return;
             }else{
                 cout<<"YES"<<el;
                 return;
             }
         }
     }else{
         cout<<"NO";
     }
 }
int main(){
	T{
		solve()
	}
}
