#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll solve(vector<ll>&a){

    ll n = a.size();
    ll allsum = 0;
    ll subs = 0;

    bool isOpen = false;

    for(ll i = 0; i < n;i++){
        allsum += abs( a[i] );
        if( a[i] < 0 and !isOpen ){
            subs++;
            isOpen = true;

        }

        if( a[i] > 0 )
            isOpen = false;
    }

    cout<<allsum<<" "<<subs<<endl;

return 0;
}


int main(){
ll ans = 0;
ll t = 1,n;
cin>>t;

while(t--){

    cin>>n;
    vector<ll>a(n);
    for(ll i = 0;i < n; i++)cin>>a[i];

    solve(a);


}
return 0;

}

