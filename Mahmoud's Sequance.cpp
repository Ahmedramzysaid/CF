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
 
const int MOD =1e9 + 7;
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
}
 
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
  return     abs(p1.second - p2.first) < abs(p1.first - p2.second) ;
}
bool custom_sort1(pair<long long, long long> p1, pair<long long, long long> p2)
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
 
bool is_power_of_2(int x)
{
    return x > 0 && !(x & (x-1));
}
vector<pair<int,int>> edg;
long long ope (long long a,  long long b)
{
 
    if (b == 0) return 1  ;
    if (b%2 == 0)
    {
 
        long long sum  =  ope (a,b/2) ;
        return  sum *sum  ;
    }
    else
    {
        long long sum  =  ope (a,b/2) ;
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
#define ll  long long
 
void solve() {
 
 ll n , k;  cin >> n >> k  ;
 vector <ll> v(n+1) ;
for(int i =1  ; i  <=n ;i++) cin>> v[i] ;
 if(n >= 17) {
        cout << "YES";
        return ;
    }
    map<ll, int> mp;
    for(ll i = 1; i < (1 << n); i++) {
        ll sum = 0;
        for(ll j  =1; j <= n; j++) {
            if((i >> (j-1)) & 1) {
                sum = (sum% k + v[j]% k) % k;
            }
        }
        mp[sum]++;
        if(mp[sum] > 1) {
            cout << "YES";
            return ;
        }
    }
    cout << "NO";
  }
 
 
 
 
 
int main() {
 AR07_ramzy07
    int t=1;
    //cin >> t;
 
    while (t--) {
       solve() ;
     }
 
    return 0;
}