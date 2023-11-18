#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

void solve(){
ll n;
cin>>n;
string s;
cin>>s;
vector<ll>inds;
deque<ll>dq;
ll count0 = 0;
ll count1 = 0;


for(ll i=0; i<n;i++){
    dq.push_back( s[i]-'0');
    count0 += (s[i]=='0');
    count1 += (s[i]=='1');
}


ll pos = 0;

if(count0 != count1){
    cout<<"-1"<<endl;
    return;
}

while( !dq.empty()){

    if(dq.front() == dq.back()){
        if(dq.front() == 0){
            dq.push_back(0);
            dq.push_back(1);
            inds.push_back(n-pos);
        }else{
            dq.push_front(1);
            dq.push_front(0);
            inds.push_back(pos);
        }
        n += 2;
    }

    while(!dq.empty() and dq.front() != dq.back()){
          dq.pop_back();
          dq.pop_front();
          ++pos;
    }
  }


  cout<<inds.size()<<endl;
  for(ll i = 0; i < inds.size(); i++){
      cout<<inds[ i ]<<" ";
  }
  cout<<endl;
}

int main(){
ll t = 1;
cin>>t;

while(t--){

    solve();

}
return 0;

}

