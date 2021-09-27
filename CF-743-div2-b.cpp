/*
 author:himanshu3198
 https://codeforces.com/contest/1573/problem/B

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


void solve(){

    
      ll n;
      cin>>n;

      vector<pair<ll,ll>>a(n),b(n);


      fr(i,n){
          cin>>a[i].first,a[i].second=i;
      }

      fr(i,n){
          cin>>b[i].first,b[i].second=i;
      }
      if(a[0]<b[0]){

          cout<<"0\n";
          return;
      }
     sort(all(a));
     sort(all(b));

    



     vector<ll>dp(n);

     dp[n-1]=b[n-1].second;


     for(int i=n-2;i>=0;i--){

         dp[i]=min(dp[i+1],b[i].second);
     }
    

      ll ans=1e9;

      fr(i,n){

          ans=min(ans,a[i].second+dp[i]);
      }

      cout<<ans<<E;
      return;
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
  
   


   
