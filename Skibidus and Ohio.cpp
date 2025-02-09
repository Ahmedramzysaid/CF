void solve() {
 string s;cin >> s;
 int cnt = 0 ;
 bool flag =  true  ;
 for (int i = 0 ;  i  < s.size()-1 ;i++)
 {
 
     if(s[i] ==s[i+1]) flag =  false ;
 }
 if(flag) cout <<s.size() ;
 else cout << 1 ;
 cout <<endl;
 
 
 
}