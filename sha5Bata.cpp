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
    /*T{
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

     };*/
    /*T{
        bool flag = true;
        int n; cin>>n;
        string s; cin>>s;
        char ch = s[0];
        for(int i=1; i<n; i++){
            if(s[i] != s[0]){ a == a
                s[i] = '1';
                s[0] = '0';
            }
        }
        if(flag){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    };*/

        T {
         int n, q;
         cin >> n;
         int prefix[n];
         int arr[n];
         for (int i = 1; i <= n; i++) {
             cin >> arr[n];
         }
         int L, R, K;
         cin >> L >> R >> K;   // 2 3 3
         int m ;
         while(L<=R){
            arr[L] = K;
            ++L;
         }

         for (int i = 1; i <= n; i++) {
             cout << arr[i] << " ";
         }

     }
