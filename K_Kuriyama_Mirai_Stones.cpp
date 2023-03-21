 #include<iostream>
 #include<bits/stdc++.h>
 #define T     int T; cin>>T; while(T--)
 #define ll    long long
 //#define l    endl
 #define pi    3.141592653
 #define el   "\n"
 #define SIZE 26
 using namespace std;
 void HOOS(){
     ios_base::sync_with_stdio(false);
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 }
 /*void I_O(){
    #ifndef ONLINE_JUDGE
         freopen("Input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
         freopen("errors.txt", "w", stderr);
    #endif
 }*/

 int main() {
     HOOS();
         int n; cin>>n;
         vector<ll>pref(n+1,0);
         vector<ll>pref2(n+1,0);
         vector<ll>v2(n+1,0);
         for(int i=1; i<=n; i++){
             ll val; cin>>val;
             v2[i] = val;
             pref[i] = pref[i-1]+val;
         }
         sort(v2.begin(),v2.end());
         for(int i=1; i<=n; i++){
             pref2[i] = pref2[i-1]+v2[i];
         }
         int  q; cin>>q;
         while(q--){
             int type,l,r; cin>>type>>l>>r;
             if(type == 1){
                 cout<<pref[r]-pref[l-1]<<el;
             }else{
                 cout<<pref2[r]-pref2[l-1]<<el;
             }
         }


 }
