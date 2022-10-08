/**************************DHEERAJ GUPTA******************************/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

/**************************PREPROCESS*********************************/
// #define int 				long long
#define ll long long
#define ull unsigned long long
#define lld long double
#define mod 1000000007
#define INF 1e18
#define nl '\n'
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pri pair<int, int>
#define pr pair<ll, ll>
#define mp make_pair
#define ff first
#define ss second
#define sz(a) (ll)(a).size()
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define present(a, b) a.find(b) != a.end()
#define acc(x) accumulate(all(x), 0ll)
#define case (i) cout << "Case #" << i++ << ": ";
#define re return;
#define maxe(x) *max_element(all(x))
#define mine(x) *min_element(all(x))
#define maxheap(x) priority_queue<x>
#define minheap(x) priority_queue<x, vector<x>, greater<x>>
#define gcd(a, b) __gcd(a, b)
#define onBits __builtin_popcount
#define onBitsll __builtin_popcountll
#define trailingzll __builtin_ctzll
#define leadingzll __builtin_clzll

// Common Responses
#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using omultiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ook order_of_key
#define fbo find_by_order
// order_of_key(k) :returns number of items < k
// find_by_order(k):returns iterator to kth element(0-based)

/**************************DEBUG**************************************/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int32_t t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template <class T>
bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
template <typename T1, typename T2>
istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
template <typename T>
void print(T &&t) { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&...args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}
template <typename T>
int32_t size_i(T &container) { return static_cast<int32_t>(container.size()); }
enum color
{
    white,
    gray,
    black
};
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// ALWAYS PASS '&'' as referce in vectors, map etc....

/**************************CODE STARTS HERE****************************/

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

void dheeraj_2002()
{
    // Write your code here.
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        dheeraj_2002();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << " ms\n";
    return 0;
}
