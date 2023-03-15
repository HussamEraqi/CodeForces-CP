#include<iostream>
using namespace std;
int main(){

int total = 0;
     int n,bar; cin>>n;
     for(int i=0; i<n; i++){
         cin>>bar;
         freq[bar]++;
     }

     int max_tower = *max_element(freq,freq+1001);
     for(int i=0; i<1001; i++){
         if(freq[i] > 0)
            total++;
     }
     cout<<max_tower<<" "<<total;
   }
