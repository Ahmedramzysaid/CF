void solve()
{
    int n, m;cin >> n >> m;
 
    vector<pair<long long, long long>> arr(n);
    long long s = 0;
 
    for (int i = 0; i < n; i++) {
        long long r = 0;
        long long f = 0;
        long long sum = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sum += x;
            r += x;
            f += r;
        }
        arr[i] = {sum, f};
        s += f;
    }
    sort(arr.begin(), arr.end(), greater<pair<long long, long long>>());
    long long ope = 0;
    for (int r = 0; r < n; r++) {
        ope += (long long)(n - 1 - r) * arr[r].first;
    }
 
    
    cout <<  s + m * ope << endl;
 
}