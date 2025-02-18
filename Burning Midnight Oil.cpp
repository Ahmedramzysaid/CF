#include<bits/stdc++.h>
using namespace std; 
int main()
{
    
    long long n, k;
    cin >> n >> k;

    long long low = 1;
    long long high = n;
    long long ans = n; 

    while (low <= high) {
        long long mid = low + (high - low) / 2; 
        long long total = 0;
        long long cur = mid;

        while (cur > 0) {
            total += cur;
            cur /= k; 
        }

        if (total >= n) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans ;

    
}