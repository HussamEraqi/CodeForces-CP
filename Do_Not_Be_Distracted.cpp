#include<iostream>
#include<bits/stdc++.h>
int main() {
     HOOS();
     int t; cin>>t;
     while(t--){
         int n; cin>>n;
         string s; cin>>s;
         vector<int>v(26,0);
         v[s[0]-'A']=1; // first task = 1
         for(int i=1; i<n; i++){
             if(s[i] == s[i-1]){
                 continue;
             }else{
                 if(v[s[i]-'A'] > 0){
                     cout<<"NO"<<el;
                     break;
                 }
                 v[s[i]-'A'] = 1;
             }
         }
         cout<<"YES"<<el;
     }*/
     int t; cin>>t;
     while(t--){
         int n; cin>>n;
         string s; cin>>s;
         unordered_map<char,int> m;
         bool flag = true;
         for(int i=0; i<n; i++){
             m[s[i]]++;
                if( m[s[i]]>1 && s[i-1] != s[i]){
                 flag = false;
                 break;
             }
         }
         if(flag)
             cout<<"YES"<<el;
         else
             cout<<"NO"<<el;

     }

 }
