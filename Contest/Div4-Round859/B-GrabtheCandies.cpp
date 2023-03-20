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
     /*int n; cin>>n;
     int arr[n];
     for(int i=1; i<=n; i++){
         cin>>arr[i];
     }
     for(int i=1; i<=n; i++){
         preFix[i] += preFix[i-1]+arr[i];
     }
     int q; cin>>q;
     while(q--){ // 0 1 2 3 4 5 6
         int type; cin>>type;
         int L,R; cin>>L>>R;
         if(type == 2){
             sort(preFix,preFix+n);
         }else{
             cout<<preFix[R]-preFix[L-1];
         }

     }
     sort(preFix,preFix+n);
     for( int i=1; i<=n; i++){
         cout<<preFix[i]<<" ";
     }*/
    T{
         int mihai =0, bianca = 0;
         int n; cin>>n;
         for(int i=0; i<n; i++){  // 1 2 3 4
             int bag ; cin>>bag;
             if(bag %2 == 0){
                 mihai +=bag;
             }else{
                 bianca +=bag;
             }
         }
         //cout<<mihai<<" "<< bianca<<el;
         if(mihai > bianca){
             cout<<"YES"<<el;
         }else{
             cout<<"NO"<<el;
         }

     };


 }
