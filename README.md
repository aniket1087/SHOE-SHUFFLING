# SHOE-SHUFFLING
Codeforces question(https://codeforces.com/contest/1691/problem/B)
Solution is uploaded in cpp format for this question in code section

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
