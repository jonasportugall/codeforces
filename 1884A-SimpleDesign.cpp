#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
ll k,x;

bool validaSum(ll n){
    string num = to_string(n);
    ll sum = 0;

    for(ll i = 0; i < num.size(); i++)
        sum += num[i]-48;

    return (sum%k==0);
}


ll solve(){

cin>>x>>k;
for(ll i=x;true;i++){
    if(validaSum(i)){
        cout<<i<<endl;
        break;
    }
}

return 0;
}


int main(){
ll ans = 0;
ll t = 1,n;
cin>>t;

while(t--){

    //cin>>n;
    //vector<ll>a(2*n);
    //for(ll i = 0;i < 2*n; i++)cin>>a[i];

    solve();


}
return 0;

}


