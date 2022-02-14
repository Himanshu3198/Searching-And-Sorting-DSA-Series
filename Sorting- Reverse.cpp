
/*
 author:himanshu3198
 https://codeforces.com/contest/1638/problem/A

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

  vector<ll>a(n),b(n);

  fr(i,n){
      cin>>a[i];
      b[i]=a[i];
  }



  sort(all(b));
   bool flag=false;
  int i;

  for( i=0;i<n;i++){

      if(a[i]!=b[i]){
          flag=true;
          break;
      }
  }

   if(flag){
      int idx;

      for(int j=0;j<n;j++){

          if(a[j]==b[i]){
              idx=j;
              break;
              
          }
      }
    

    while(i<=idx){

        swap(a[i],a[idx]);
        i++;
        idx--;
    }

   }
 


  for(auto it:a) cout<<it<<" ";
  cout<<E;
  

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
