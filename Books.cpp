#include<bits/stdc++.h>
using namespace std ;




int pointers(int n, long long t, vector<int>& v) {
    int l = 0;
    long long s = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        while (l < n && s + v[l] <= t) {
            s += v[l];
            l++;
        }
        mx = max(mx, l - i);
        s -= v[i];
    }

    return mx ;
}


bool check(int cnt, int i, long long t, vector<int>& v) {
    if(i + cnt > v.size()) return false;
    long long sum = 0;
    for(int j = i; j < i + cnt; j++) {
        sum += v[j];
        if(sum > t) return false;
    }
    return true;
}

int solve(int n, long long t, vector<int>& v) {
    int mx = 0;
    

    for(int i = 0; i < n; i++) {
      
        int l = 0, r = n - i;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(check(mid, i, t, v)) {
                mx = max(mx, mid);
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    
    return mx;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long t;
    cin >> n >> t;
    
    vector<int> v(n);
   for(auto &it : v) cin >> it ;
    
    cout << pointers(n, t, v)  ;
    return 0;
}