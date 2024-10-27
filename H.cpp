#include <bits/stdc++.h>

using namespace std;

int main(){
    int menor = INT_MAX;
    int menorPos;

    for(int i = 0; i < 10; i++){
        int val;
        cin >> val;
        if(val < menor){
            menor = val;
            menorPos = i+1;
        }
    }

    cout << menorPos << " posicao\n";
}