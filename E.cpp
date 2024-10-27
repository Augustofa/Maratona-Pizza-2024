#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){
        cout << "Pedro\n";
    }else if(a < b){
        cout << "Patrícia\n";
    }else{
        cout << "A Mesa do Prejuízo foi a vencedora!!!\n";
    }
}