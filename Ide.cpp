#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sof sizeof
typedef double ld;
#define all(v) v.begin(),v.end()
#define ms(dp,a) memset(dp,(ll)a,sof(dp))
#define sqr(x) (x)*(x)
#define pb push_back
#define mod 1000000007
const int N=1e5+10;
const int INF=1e9+10;
#define mkp make_pair
#define inf 1e18
#define minf -1e18
#define rep(i,n) for(ll i=0;i<n;++i)
// vector<ll> per(N);
// vector<ll> adj[N];
// vector<bool> vis(N,false);
// vector<ll> dist(51,0);
 
 
int main(){
        
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
         
         ll t;cin>>t;
         while(t--){
              ll n;cin>>n;
              vector<ll> arr(n);
              rep(i,n) {
              cin>>arr[i];
              }
                    bool flag=1;
                    vector<ll> temp(n);
                    iota(temp.begin(),temp.end(),1);
                    for(int i=0;i<n;i++){
                          ll cnt=1;
                          while(arr[i]==arr[i+1]){
                                swap(temp[i],temp[i+1]);
                                i++;
                                cnt++;
                          }
                          if(cnt==1){
                                cout<<-1<<endl;
                                flag=0;
                                break;
                          }
                    }
                    if(!flag){
                          continue;
                    }
                    rep(i,n){
                          cout<<temp[i]<<" ";
                    }cout<<endl;
              
              
         }
         
               
                  
         
      
         
 return 0;
}
// read the question correctly  
 