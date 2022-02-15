
/*
 author:himanshu3198
 https://codeforces.com/contest/1638/problem/B

*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_backCF
#define      mp make_pair
#define      all(x) (x).begin(), (x).end()
#define      MOD 1000000007LL
#define      MAX(a, b) ((a) > (b) ? (a) : (b))
#define      MIN(a, b) ((a) < (b) ? (a) : (b))
#define      ABS(x) ((x) < 0 ? -(x) : (x))
#define      setbits(x) __builtin_popcount(x)
#define      vi vector<int>
#define      vl vector<long long int>
#define      vvi vector<vector<int>>
#define      vvl vector<vector<long long int>>
#define      INF 1e9
#define      _Y puts("Yes")
#define      _N puts("No")
#define      showArr(v) for(auto it:v) cout<<it<<" ";
#define      BhaagBC()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);

using namespace std;



void himanshu3198()
{
   
   
  ll n;
  cin>>n;

   vi a(n);


  fr(i,n) cin>>a[i];

 int  lastEven=0,lastOdd=1;
  
//    showArr(a);

  fr(i,n){

      if(a[i]&1){
   
       if(a[i]<lastOdd){
           _N;
           return;
       }
       lastOdd=a[i];
       
      }else{
 
         if(a[i]<lastEven){
            _N;
             return;
         }
         lastEven=a[i];
      }
  }
  
       _Y;  
    


}


int main()
{
    BhaagBC();
    int t = 1;
    cin >> t;

    while (t--)
    {

        himanshu3198();
    }

    return 0;
}
