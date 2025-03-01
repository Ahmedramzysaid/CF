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
 
 
 
 
 
void solve()
{
    ll n, m;cin >> n >> m;
    if (n < m)swap(n, m);
    ll dp[n + 1][2][2];
    dp[0][0][1] =0  ;
    dp[0][1][1] = 0;
    dp[0][0][0] = 1 ;
    dp[0][1][0] = 1;
    for (int i = 0; i < n; ++i)
    {
        dp[i+1][0][0] = dp[i][0][1] % MOD;
        dp[i+1][0][1] = (dp[i][1][0] % MOD + dp[i][1][1]% MOD) % MOD;
        dp[i+1][1][0] = dp[i][1][1] % MOD;
        dp[i+1][1][1] = (dp[i][0][0]% MOD + dp[i][0][1]% MOD) % MOD;
    }
    ll ans = 0;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            ans = (ans%MOD+dp[n][i][j]%MOD)%MOD ;
    vector<ll> fib(m + 1, 0);
    fib[1] =2 ;
    fib[2] = 2;
    for(int i=3; i<=m; i++)
        fib[i] = (fib[i-1]%MOD + fib[i-2] %MOD)%MOD ;
    for (int i = 0; i < m; ++i) ans = (ans%MOD + fib[i]%MOD)%MOD;
    cout << ans ;
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