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
const int MOD = 1e9 + 7;
/*
long long seive(long long n)
{
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (v[i])
        {
            for (long long j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    long long k = 0;
    for (int i = 2; i <= n; i++)
        if (v[i]) k = i;
 
    return k;
}
*/
int check(int n, int i)
{
    return (n >> i) & 1;
}
 
int Set(int n, int i)
{
    return (n | (1 << i));
}
 
int unset(int &n, int i)
{
    return n & (~(1 << i));
}
 
bool isprime(long long n)
{
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
 
long long int gcd_number(long long int a, long long int b)
{
    if (a == 0) return b;
    else if (b == 0) return a;
    else
    {
        if (a < b)
            swap(a, b);
        return gcd_number(a % b, b);
    }
}
 
long long lcm(long long a, long long b)
{
    long long x = gcd_number(a, b);
    return a / x * b;
}
 
bool power_of_two(long long x, int s)
{
    return (x >> s) & 1;
}
 
long long fib(long long a, long long b, long long q)
{
    if (q == 1) return a;
    if (q == 2) return b;
    if (q >= 3) return (fib(a, b, q - 1) ^ fib(a, b, q - 2));
    return 0;
}
/*
long long prime(long long n)
{
    for (long long i = n; i >= 2; i--)
    {
        bool flag = true;
        for (long long j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag) return i;
    }
    return 0;
*/
long long zz(int a, int b, int MOD)
{
    long long res = a * b - MOD * int(1.L / MOD * a * b);
    return res + MOD * (res < 0) - MOD * (res >= (long long)MOD);
}
int mod = 1e9 + 7;
long long pp(long long b, long long e, long long MOD)
{
    long long res = 1;
    for (; e; b = zz(b, b, MOD), e /= 2)
        if (e & 1) res = zz(res, b, MOD);
    return res;
}
long long smusq(long long i)
{
    return (i + 1) / 2 * (i | 1);
}
 
bool custom_sort(pair<long long, long long> p1, pair<long long, long long> p2)
{
    if (p1.second != p2.second)
    {
        return p1.second > p2.second;
    }
    return p1.first > p2.first;
}
bool comp(string s, string s1)
{
    if (s.size() != s1.size())
        return s.size() < s1.size() ;
 
    return s < s1 ;
}
double space(pair<double, double> p, pair<double, double> p1)
{
    return sqrt((p.first - p1.first) * (p.first - p1.first) + (p.second - p1.second) * (p.second - p1.second));
}
bool is_power_of_2(int x)
{
    return x > 0 && !(x & (x-1));
}
vector<bool> vis(100001, false);;
vector<vector<int>> adj(100001);
vector<int> res  ;
int cnt = 0 ;
 
void dfs(int node)
{
    vis[node] = true;
 
    for (int i = 0; i < adj[node].size(); i++)
    {
        int child = adj[node][i];
        if (!vis[child] )
        {
            cnt++ ;
            dfs(child) ;
        }
        else
        {
            res.push_back(cnt) ;
        }
 
    }
    return ;
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
bool is_prime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0) return false;
    }
    return true;
}
vector<ll> dp(1000001, -1);
 
ll call(ll n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];
    dp[n] = (call(n-1) % MOD + call(n-2) % MOD) % MOD;
    return dp[n];
}
 
void solve()
{
    int n;
    cin >> n;
    vector<vector<ll>> v(n);
    vector<ll> v1(n);
    vector<ll> v2(n);
    vector<vector<ll>> prefix(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
        v[i] = vector<ll>(v2[i]);
        for (int j = 0; j < v2[i]; ++j)
            cin >> v[i][j];
        sort(v[i].begin(), v[i].end());
        prefix[i] = vector<ll>(v2[i] + 1);
        prefix[i][0] = 0;
        for (int j = 0; j < v2[i]; ++j)
            prefix[i][j + 1] = prefix[i][j] + v[i][j];
        v1[i] = prefix[i][v2[i]];
    }
 
    int q;
    cin >> q;
    while (q--) {
        ll a;
        cin >> a;
        ll loc = -1;
        ll sum = LLONG_MAX;
        for (int i = 0; i < n; ++i) {
            auto it = upper_bound(v[i].begin(), v[i].end(), a);
            ll j = it - v[i].begin();
            ll l = prefix[i][j];
            ll r = v1[i] - l;
            ll sa = (a * j - l) + (r - a * (v2[i] - j));
            if (sa < sum) {
                sum = sa;
                loc = i;
            } else if (sa == sum && i < loc) {
                loc = i;
            }
        }
        cout << loc + 1 << " ";
    }
    
}
 
int main()
{
 
    AR07_ramzy07 ;
    ll t = 1;
    //cin >> t;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    while (t--)
    {
        solve() ;
    }
 
}