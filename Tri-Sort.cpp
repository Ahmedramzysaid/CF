/*
 
                                                   ██████╗  █████╗ ███╗   ███╗███████╗██╗   ██╗
                                                   ██╔══██╗██╔══██╗████╗ ████║╚══███╔╝╚██╗ ██╔╝
                                                   ██████╔╝███████║██╔████╔██║  ███╔╝  ╚████╔╝
                                                   ██╔══██╗██╔══██║██║╚██╔╝██║ ███╔╝    ╚██╔╝
                                                   ██║  ██║██║  ██║██║ ╚═╝ ██║███████╗   ██║
                                                   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝   ╚═╝
 
*/
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define AR07_ramzy07 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using ull = unsigned long long;
//using uint128 =  __int128 ;
const int MOD = 1e9 + 7;
 
ll seive(ll n) {
    std::vector<bool> v(n + 1, true);
    v[0] = v[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (v[i]) {
            for (ll j = i * i; j <= n; j += i) {
                v[j] = false;
            }
        }
    }
    ll k = 0;
    for (int i = 2; i <= n; i++)
        if (v[i]) k = i;
 
    return k;
}
 
int check(int n, int i) {
    return (n >> i) & 1;
}
 
int Set(int n, int i) {
    return (n | (1 << i));
}
 
int unset(int &n, int i) {
    return n & (~(1 << i));
}
 
bool isprime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
 
ll gcd_number(ll a, ll b) {
    if (a == 0) return b;
    else if (b == 0) return a;
    else {
        if (a < b)
            std::swap(a, b);
        return gcd_number(a % b, b);
    }
}
 
ll lcm(ll a, ll b) {
    ll x = gcd_number(a, b);
    return a / x * b;
}
 
bool power_of_two(ll x, int s) {
    return (x >> s) & 1;
}
 
ll fib(ll a, ll b, ll q) {
    if (q == 1) return a;
    if (q == 2) return b;
    if (q >= 3) return (fib(a, b, q - 1) ^ fib(a, b, q - 2));
    return 0;
}
 
ll mull(ll a, ll b, ll mod) {
    ll result = 0;
    while (b) {
        if (b % 2 == 1)
            result = (result + a) % mod;
        a = (a * 2) % mod;
        b /= 2;
    }
    return result;
}
 
ll mod_pow(ll a, ll e, ll mod) {
    ll result = 1;
    a %= mod;
    while (e > 0) {
        if (e % 2 == 1)
            result = mull(result, a, mod);
        a = mull(a, a, mod);
        e /= 2;
    }
    return result;
}
 
bool is_prime(ll n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    ll d = n - 1;
    int s = 0;
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }
    std::vector<ll> b = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
    for (ll a : b) {
        if (a >= n)
            continue;
        ll x = mod_pow(a, d, n);
        if (x == 1 || x == n - 1)
            continue;
        for (int i = 0; i < s - 1; i++) {
            x = mull(x, x, n);
            if (x == n - 1)
                break;
        }
        if (x != n - 1)
            return false;
    }
    return true;
}
 
ll pollards_rho(ll n) {
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 2;
    if (n % 3 == 0)
        return 3;
    if (n % 5 == 0)
        return 5;
 
    while (true) {
        ll c = rand() % (n - 1) + 1;
        auto f = [&](ll x) { return (mull(x, x, n) + c) % n; };
        ll x = 2, y = 2, d = 1;
        while (d == 1) {
            x = f(x);
            y = f(f(y));
            d = gcd_number(abs(x - y), n);
        }
        if (d != n)
            return d;
    }
}
 
vector<ll> factor(ll n) {
    if (n == 1)
        return {};
    if (is_prime(n))
        return {n};
    ll d = pollards_rho(n);
    vector<ll> left = factor(d);
    vector<ll> right = factor(n / d);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}
 
ll prime(ll n) {
    for (ll i = n; i >= 2; i--) {
        bool flag = true;
        for (ll j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) return i;
    }
    return 0;
}
 
ll zz(int a, int b, int MOD) {
    ll res = a * b - MOD * int(1.L / MOD * a * b);
    return res + MOD * (res < 0) - MOD * (res >= (ll)MOD);
}
 
ll pp(ll b, ll e, ll MOD) {
    ll res = 1;
    for (; e; b = zz(b, b, MOD), e /= 2)
        if (e & 1) res = zz(res, b, MOD);
    return res;
}
 
ll smusq(ll i) {
    return (i + 1) / 2 * (i | 1);
}
 
bool custom_sort(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (p1.second != p2.second) {
        return p1.second > p2.second;
    }
    return p1.first > p2.first;
}
 
bool comp(string s, string s1) {
    if (s.size() != s1.size())
        return s.size() < s1.size();
    return s < s1;
}
 
double space(pair<double, double> p, pair<double, double> p1) {
    return sqrt(pow(p.first - p1.first, 2) + pow(p.second - p1.second, 2));
}
 
bool is_power_of_2(int x) {
    return x > 0 && !(x & (x - 1));
}
 
vector<bool> vis(100001, false);
vector<vector<int>> adj(100001);
vector<int> res;
int cnt = 0;
 
void dfs(int node) {
    vis[node] = true;
    for (int child : adj[node]) {
        if (!vis[child]) {
            cnt++;
            dfs(child);
        } else {
            res.push_back(cnt);
        }
    }
}
ull modmul(ull a, ull b, ull mod) {
   ll res = (ll)a * b;
    res %= mod;  return (ull)res;
}
 
ull modexp(ull base, ull exp, ull mod) {
    ull res = 1;
    base %= mod;
    while(exp) {
        if(exp & 1) res = modmul(res, base, mod);
        base = modmul(base, base, mod);
        exp >>= 1;
    }
    return res;
}
 
bool isPrime(ull n) {
    if(n < 2) return false;
    static int smallPrimes[12] = {2,3,5,7,11,13,17,19,23,29,31,37};
    for (int p : smallPrimes) {
        if(n == p) return true;
        if(n % p == 0) return false;
    }
    ull d = n - 1;
    int s = 0;
    while((d & 1) == 0) { d >>= 1; s++; }
    int testPrimes[7] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
    for (int a : testPrimes) {
        if(a % n == 0) continue;
        ull x = modexp(a, d, n);
        if(x == 1 || x == n-1) continue;
        bool cont = false;
        for(int i = 1; i < s; i++){
            x = modmul(x, x, n);
            if(x == n-1){ cont = true; break; }
        }
        if(!cont) return false;
    }
    return true;
}
 
ull f(ull x, ull c, ull mod) {
    return (modmul(x, x, mod) + c) % mod;
}
 
ull pollardRho(ull n) {
    if(n % 2 == 0) return 2;
    ull x = rand() % (n-2) + 2;
    ull y = x;
    ull c = rand() % (n-1) + 1;
    ull d = 1;
    while(d == 1) {
        x = f(x, c, n);
        y = f(f(y, c, n), c, n);
        ull diff = x > y ? x - y : y - x;
        d = gcd_number(diff, n);
        if(d == n) return pollardRho(n);
    }
    return d;
}
 
void factorize(ull n, std::vector<ull>& factors) {
    if(n == 1) return;
    if(isPrime(n)) {
        factors.push_back(n);
        return;
    }
    ull factor = pollardRho(n);
    factorize(factor, factors);
    factorize(n / factor, factors);
}
 
/*
 
 ░▒▓███████▓▒░░▒▓██████▓▒░░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░
░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░
░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░    ░▒▓█▓▒▒▓█▓▒░░▒▓█▓▒░
 ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░    ░▒▓█▓▒▒▓█▓▒░░▒▓██████▓▒░
       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▓█▓▒░ ░▒▓█▓▒░
       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▓█▓▒░ ░▒▓█▓▒░
░▒▓███████▓▒░ ░▒▓██████▓▒░░▒▓████████▓▒░▒▓██▓▒░  ░▒▓████████▓▒░
 
*/
 
void solve()
{/*
     long long a, c; cin >> a >> c;
      ll m = c / a;
        long long ans = LLONG_MAX;
        for(long long i = 1; i * i <= a; i++){
            if(a % i == 0){
                long long g1 = i, g2 = a / i;
                if(__gcd(a / g1, m) == 1) ans = min(ans, a + m * g1);
                if(g1 != g2 && __gcd(a / g2, m) == 1) ans = min(ans, a + m * g2);
            }
        }
        cout << ans << "\n";*/
        int n ;  cin >> n ;
        vector<ll> v(n) ;
        for(auto  &it : v) cin >> it  ;
        if(n == 1)
        {
            if (v[0] == 1) {
                cout << "YES" << endl ;
            }
            else cout << "NO" << endl ;
        }
        else  if(n == 2)
        {
            if (v[0] == 1 || v[1] == 2) {
                cout << "YES" << endl ;
            }
            else cout << "NO" << endl ;
        }
        else {
              for (int i = 0; i < n; ++i) {
        if ((i+1) % 2 != v[i] % 2) {
           cout << "NO" << endl ;
           return ;
        }
    }
    cout << "YES" << endl ;
        }
 
 
 
}
int main()
{
 
    AR07_ramzy07 ;
    ll t = 1;
    cin >> t;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    while (t--)
    {
        solve() ;
    }
 
}