int n,m; cin>>n>>m;
     set<int>s;
     set<int>::iterator it;
     for(int i=1; i<=m; i++){
         s.insert(i);
     }
     while(n--){
         int l,r; cin>>l>>r;
         for(int i=l; i<=r; i++){
             s.erase(i);
         }
     }
     cout<<s.size()<<el;
     for(it=s.begin(); it!=s.end(); it++){
         cout<<*it<<" ";
     }
