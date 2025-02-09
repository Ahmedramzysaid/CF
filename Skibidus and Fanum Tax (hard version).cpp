 int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for(auto &it :a) cin >> it  ;
    for(auto &it :b) cin >> it  ;
    sort(b.begin(), b.end());
     long long mx = 1LL << 60;
    long long s = -(1LL << 60);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        long long z = mx;
        if(a[i] >= s)
            z = a[i];
        long long f = mx;
        auto it = lower_bound(b.begin(), b.end(), s + a[i]);
        if(it != b.end())f = (*it) - a[i];
        long long cnt = min(z, f);
        if(cnt == mx)
        {
            flag = false;
            break;
        }
        s = cnt;
    }
 
    if(flag) cout << "YES" ;
    else cout << "NO" ;
    cout << endl ;
 