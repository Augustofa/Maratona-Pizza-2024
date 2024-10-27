#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int maior = INT_MIN;
    int menorx, menorY;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int val;
            cin >> val;
            if(val > maior){
                maior = val;
                menorx = i;
                menorY = j;
            }
        }
    }

    cout << "A pizza de Mucarela esta localizada na linha " << menorx << ", coluna " << menorY << "\n";
}