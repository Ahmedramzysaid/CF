void solve()
{
 
    int m;cin >> m;
    vector<int> b(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    vector<vector<int>> adj(m + 1);
    for (int i = 1; i <= m - 1; i++) {
        int f, g;
        cin >> f >> g;
        adj[f].push_back(g);
        adj[g].push_back(f);
    }
    vector<char> h(m + 1, '0');
 
    for (int i = 1; i <= m; i++) {
        for (int j : adj[i]) {
            if (i < j && b[i] == b[j]) {
                h[b[i]] = '1';
            }
        }
    }
    for (int i = 1; i <= m; i++) {
        if (adj[i].size() < 2) continue;
        vector<int> v;
        v.reserve(adj[i].size());
        for (auto it : adj[i]) {
            v.push_back(b[it]);
        }
        sort(v.begin(), v.end());
        int n = 1;
        for (int j = 1; j < v.size(); j++) {
            if (v[j] == v[j - 1]) {
                n++;
            } else {
                if (n >= 2) {
                    h[v[j - 1]] = '1';
                }
                n = 1;
            }
        }
        if (n >= 2) {
            h[v.back()] = '1';
        }
    }
    string ans = "";
    for (int i = 1; i <= m; i++)
        ans += h[i];
    cout << ans << endl;
}