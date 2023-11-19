
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    ll solve(){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<ll>st;
        for(ll i = 0; i < n;i++)
            if(s[i] == '0')
                st.push( i );


        ll ans = 0;
        for(ll i = n-1; i >=0; --i){

            if(st.empty()){
                cout<<"-1 ";
                continue;
            }

            ans += ( i - st.top() );

            cout<<ans<<" ";

            st.pop();
        }

        cout<<endl;

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
