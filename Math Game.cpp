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
#define AR07_ramzy07 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
typedef long long ll;
const int MOD =1e9 + 7;
ll seive(ll n)
{
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (v[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    ll k = 0;
    for (int i = 2; i <= n; i++)
        if (v[i]) k = i;
    return k;
}
int Set(int n, int i)
{
    return (n | (1 << i));
}
 
int unset(int &n, int i)
{
    return n & (~(1 << i));
}
bool isprime(ll n)
{
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
ll gcd_number(ll a, ll b)
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
ll lcm(ll a, ll b)
{
    ll x = gcd_number(a, b);
    return a / x * b;
}
bool power_of_two(ll x, int s)
{
    return (x >> s) & 1;
}
ll fib(ll a, ll b, ll q)
{
    if (q == 1) return a;
    if (q == 2) return b;
    if (q >= 3) return (fib(a, b, q - 1) ^ fib(a, b, q - 2));
    return 0;
}
ll prime(ll n)
{
    for (ll i = n; i >= 2; i--)
    {
        bool flag = true;
        for (ll j = 2; j * j <= i; j++)
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
}
struct PairHash
{
    template <class T1, class T2>
    size_t operator () (const pair<T1, T2>& p) const
    {
        auto h1 = hash<T1> {}(p.first);
        auto h2 = hash<T2> {}(p.second);
        return h1 ^ h2;
    }
};
ll zz(int a, int b, int MOD)
{
    ll res = a * b - MOD * int(1.L / MOD * a * b);
    return res + MOD * (res < 0) - MOD * (res >= (ll)MOD);
}
ll mod = 1e9 + 7;
ll pp(ll b, ll e, ll MOD)
{
    ll res = 1;
    for (; e; b = zz(b, b, MOD), e /= 2)
        if (e & 1) res = zz(res, b, MOD);
    return res;
}
ll smusq(ll i)
{
    return (i + 1) / 2 * (i | 1);
}
bool custom_sort(pair<ll,ll> p1, pair<ll, ll> p2)
{
    return     abs(p1.second - p2.first) < abs(p1.first - p2.second) ;
}
bool custom_sort1(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return  abs(p1.first - p2.second)  < abs(p1.second - p2.first) ;
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
bool is_power_of_2(ll x)
{
    return x > 0 && !(x & (x-1));
}
vector<pair<ll,ll>> edg;
ll ope (ll a,  ll b)
{
    if (b == 0) return 1  ;
    if (b%2 == 0)
    {
        ll sum  =  ope (a,b/2) ;
        return  sum *sum  ;
    }
    else
    {
        ll sum  =  ope (a,b/2) ;
        return  sum *sum *a ;
    }
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
vector<bool> fal(vector<bool>& v) {
for (int i = 0  ; i  < 10 ; i++)
{
    v[i] = false  ;
}
return  v  ;
}
 
void solve() {
  int n  ;  cin >> n;
  vector<ll> v(n) ;
  for(auto &it :  v) cin >> it  ;
  map<double  ,  int>  m ;
  for (ll i = 1 ;  i  <= n; i++)
  {
     ll  up  = (v[i-1]*v[i-1]*v[i-1])+ (i*i*i);
     ll low  =  v[i-1]+i ;
     m[up*1.0/low]++ ;
  }
  ll cnt = 0;
  for (auto  it : m)
  {
       cnt+=  (it.second*(it.second-1))/2 ;
  }
  cout << cnt << endl ;
}
int main()
{
    AR07_ramzy07
    ll t=1;
    cin >> t;
    while (t--)
        solve() ;
    return 0;
}