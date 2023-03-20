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
    T{
         int a,b,c;
         cin>>a>>b>>c;
         if(a+b == c)
             cout<<"+"<<el;
         else if(a-b == c)
             cout<<"-"<<el;
 
     };



 }
