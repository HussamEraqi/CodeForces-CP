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
 ll freq[1001] = {0};
 ll preFix[100001] = {0};
 int main() {
     HOOS();
     //C. Find and Replace
     T{
         int n; cin>>n;
         set<char>s1,s2;
         for(int i=0; i<n; i++){
             char c; cin>>c;
             if(i&1)
                 s2.insert(c);
             else
                 s1.insert(c);
         }
         bool flag = false;
         for(auto &i:s1){
             if(s2.count(i)){
                flag = true;
                 break;
             }
         }
         if(!flag){
             cout<<"YES"<<el;
         }else{
             cout<<"NO"<<el;
         }


     };
   /*  T{
         int n; ll q;  cin>>n>>q;
         vector<ll>v(n+1,0);
         for(int i=1; i<=n; i++){
             cin>>v[i];
             v[i]+=v[i-1]; //prefix sum
         }
         while(q--){
             ll sum = v[n];
             int l,r,k; cin>>l>>r>>k;
             ll diff = (r-l+1)*k; // replace the part i need
             sum -=(v[r]-v[l-1]);;  // remove
             sum +=diff; // add to make new sum
             if(sum&1) cout<<"YES"<<el;
             else cout<<"NO"<<el;
         }
     };*/




 }
