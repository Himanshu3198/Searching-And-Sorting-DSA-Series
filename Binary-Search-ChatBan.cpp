
/*
 author:himanshu3198
 problem:https://codeforces.com/contest/1612/problem/C

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
#define      INF 1e18
#define      _Y puts("Yes")
#define      _N puts("No")
#define      showArr(v) for(auto it:v) cout<<it<<" "; cout<<E;
#define      Print(ans) cout<<ans<<E;
#define      Nitro()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);

using namespace std;


bool isValid(ll mid,ll x,ll k,ll total){

    ll count=0;
    ll message=2*k-1;
    if(mid>k){
         ll remain=message-mid;
         remain= (remain*(remain+1)/2);
         count+=(total-remain);
        }
    else{
      count+=((mid*(mid+1))/2);
    } 
   return count>=x;
}
void himanshu3198()
{
     
    ll k,x;
    cin>>k>>x;

    ll low=1;
    ll high=(2*k)-1;
  
    ll ans=high;

    ll left=k-1;
    ll total=2*(((left*(left+1))/2))+k;

    

    while(low<=high){

        ll mid=(low+high)/2;

        if(isValid(mid,x,k,total)){
            
            ans=mid;
            
            high=mid-1;
        }else{
          low=mid+1;
        }

      

    }


    Print(ans);

}


int main()
{
    Nitro();
    int t = 1;
    cin >> t;

    while (t--)
    {

        himanshu3198();
    }

    return 0;
}
