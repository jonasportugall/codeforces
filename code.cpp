

    // JAI BAJARANG BALI

    // manitianajay45

    // give me some sunshine, give me some rain, give me another chance to grow up once again....

    // sab moh maya h....

    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);


        ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            string s;
            cin>>s;
            set<ll> st;



            for(ll i=0;i<n;i++){
                if(s[i]=='0'){
                    st.insert(i);
                }
            }

            ll val=0;


            for(ll i=n-1;i>=0;i--){
                if(st.size()==0){
                    cout<<"-1 ";
                    continue;
                }

                auto it=st.rbegin();
                 val+=(i-(*it));
                st.erase(*it);

                cout<<val<<" ";
            }

            cout<<endl;




        }




        return 0;
    }
