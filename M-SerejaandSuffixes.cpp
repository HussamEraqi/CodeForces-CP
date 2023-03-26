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
     int n,m; cin>>n>>m;
     int arr[n],pre[n];
     map<int,int>map1;
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     for(int i=n-1; i>=0; i--){
        if(!map1[arr[i]]){
            if(i != n-1){
                pre[i] = pre[i+1]+1;
            }else{
                pre[i] = 1;
            }
        }else{
            pre[i] = pre[i+1];
        }
        map1[arr[i]]++;
     }
     ll num;
     while(m--){
         cin>>num;
         cout<<pre[num-1]<<el;
     }


 }
