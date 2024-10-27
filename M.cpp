#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;

    map<ll,ll> mapa;
    bool res = true;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            ll val;
            cin >> val;
            mapa[val]++;
            if(mapa[val] > n){
                res = false;
            }
        }
    }

    if(res){
      cout << 1 << "\n";
    }else{
      cout << 0 << "\n";
    }
}