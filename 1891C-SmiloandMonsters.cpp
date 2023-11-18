#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

ll solve(){
ll n,sum=0;
cin>>n;
vector<ll>a(n);
for(ll i=0; i<n; i++)cin>>a[i];

sort(a.begin() , a.end());
for(auto i : a)sum += i;

ll ans = 0;
ans = (sum+1) / 2;

sum /= 2;

ll r = n-1;

while(  sum > 0 ){
    sum -= a[r--];
    ans++;
}

cout<< ( ans ) <<endl;


return 0;
}


int main(){
ll t = 1;
cin>>t;

while(t--){

    solve();

}
return 0;

}

