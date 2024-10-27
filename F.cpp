#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int vals[n][m];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> vals[i][j];
        }
    }

    int k;
    cin >> k;

    char simbs[k][m];

    for(int i = 0; i < k; i++){
        for(int j = 0; j < m; j++){
            cin >> simbs[i][j];
        }
    }

    
}