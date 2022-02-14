
/*
 author:himanshu3198
 https://codeforces.com/contest/1638/problem/B

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
   
   
  ll n;
  cin>>n;

  vector<ll>a(n);


  fr(i,n) cin>>a[i];


    bool flag=true;
    bool endgame=false;
  for(ll len=1;len<=n;len++){
 
   
       flag=true;
    for(int i=0;i<n;i++){
               
            
        if(a[i]>a[i+1]){
             flag=false;
            ll odd=(a[i]+a[i+1]);
            if(a[i]>a[i+1] and odd%2==0){
                endgame=true;
                break;
            }
          
            if(odd%2==1){
                swap(a[i],a[i+1]);
            }
        }
    }
    if(flag==true){
        break;
    }
  
    
    if(endgame){
        break;
    }
  }

  if(flag and !endgame){
      puts("Yes");
  }else{
      puts("No");
  }

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
