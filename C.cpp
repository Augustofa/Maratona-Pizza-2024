#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        double val;
        cin >> val;

        double v1 = val;
        double v2 = (val/2) + val;
        double v3 = (val/8) + v1;
        double v4 = (v2/8) + v2;
        double v5 = (v3/8) + v3;
        v1 = trunc(v1*100);
        v2 = trunc(v2*100);
        v3 = trunc(v3*100);
        v4 = trunc(v4*100);
        v5 = trunc(v5*100);

        cout << fixed << setprecision(2) << v1/100 << " " << v2/100 << " " << v3/100 << " " << v4/100 << " " << v5/100 << "\n";
    }
}