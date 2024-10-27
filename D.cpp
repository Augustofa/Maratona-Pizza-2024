#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    string res = "";
    bool ig = true;
    for(auto c : s){
        if(c == ' '){
            res += c;
        }else{
            if(!ig){
                res += c;
            }
            ig = !ig;
        }
    }

    cout << res << "\n";
}