#include<bits/stdc++.h>
typedef long long ll;

using namespace std;


ll solve(vector<ll>&a,ll n){


    sort(a.begin(), a.end());
    
    vector<ll>x;
    vector<ll>y;
    ll sum = 0;
    ll r = n*2-1;

    r--;

    for(ll l = 1; l <= n-1; l++, r--){

        sum += (a[l] - a[l-1]);
        sum += (a[r+1] - a[r]);
    }

    cout<<sum<<endl;

    for(ll i=0, j=2*n-1; i<n; i++,j--)
        cout<< a[i]<< " " << a[j]<<endl;

return 0;
}


int main(){
ll ans = 0;
ll t = 1;
ll n;
cin>>t;

while(t--){

    cin>>n;
    vector<ll>a(2*n);

    for(ll i = 0;i < 2*n; i++)cin>>a[i];

    solve(a,n);


}
return 0;

}


