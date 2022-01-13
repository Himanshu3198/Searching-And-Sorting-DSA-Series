/*
 author:himanshu3198
 https://codeforces.com/contest/1613/problem/C

*/
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_backCF
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{

    ll n, h;
    cin >> n >> h;

    ll low = 0, high = h;
    vector<ll> a(n);
    fr(i, n)
    {

        cin >> a[i];
    }

    ll res = high;

    while (low <= high)
    {

        ll mid = (low + high) / 2;

        ll sum = 0;

        for (ll i = 0; i < n - 1; i++)
        {

            sum += min(mid, a[i + 1] - a[i]);
        }
        sum += mid;

        if (sum>=h)
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << res << E;
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
