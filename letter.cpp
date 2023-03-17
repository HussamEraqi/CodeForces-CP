// we need to know is s2 available in s1 or not very simple problem
// using Frequancey Array to solve :
#include<bits/stdc++.h>
#define ll    long long
ll freq[1001] = {0};
 int main() {
     HOOS();
     ll count=0;
     string str1,str2,s;
     getline(cin,str1);
     getline(cin,str2);
    char c = ' ';
    for(ll i=0; i<str1.length(); i++){
        freq[str1[i]]++;
    }
    for(ll i=0; i<str2.size(); i++){
        if(str2[i] == c){
            continue;
        }else{
            s +=str2[i];
         }
     }
    //cout<<s<<el;
     for(ll i=0; i<s.size(); i++){
         if(freq[s[i]] > 0){
            freq[s[i]]--;
            count++;
         }else{
             cout<<"NO";
             return 0;
         }
     }
     if(count == s.size())
         cout<<"YES";
     else
         cout<<"NO";
 }
