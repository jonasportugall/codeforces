
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    ll solve(){
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n),b(n);
        a[0] = 1;
        for(ll i = 1;i < n;i++)
            cin>>a[i];
         for(ll i = 0;i < n;i++)
            cin>>b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll cont = 0;
        for(ll i=0; i<n;i++){
            vector<ll>::iterator ub = upper_bound(b.begin(), b.end(), a[i]);
            if(ub==b.end())break;

            b.erase(ub);

            cont++;

        }

        cout<<( n - cont )<<endl;



    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

