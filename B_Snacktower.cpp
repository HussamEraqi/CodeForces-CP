     int n; cin>>n;
     int max = n;
     int fre[n+1] = {0};
     for(int i=0; i<n; i++){
         int value; cin>>value;
         fre[value] = 1;
         while(fre[max]){ // 3
            cout<<max<<" ";
            max--;
         }
         cout<<el;
     }
