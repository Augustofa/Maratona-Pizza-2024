#include <bits/stdc++.h>

using namespace std;

struct Pizza{
    string nome;
    int qInicial = 0, estoque = 0;
    double preco = 0;
    int consum, saldo; 
    double valSaldo;

    void calc(){
        consum = qInicial - estoque;
        saldo = qInicial - consum;
        valSaldo = preco * estoque;
    }
};

int comp(Pizza a, Pizza b){
    if(a.consum != b.consum){
        return a.consum > b.consum;
    }
    if(a.valSaldo != b.valSaldo){
        return a.valSaldo > b.valSaldo;
    }
    if(a.preco != b.preco){
        return a.preco < b.preco;
    }
    return a.nome < b.nome;
}

int main(){
    int q;
    cin >> q;
    string nome;
    int qtd;
    double p;
    unordered_map<string,Pizza> mapa;

    // Pizza vet[101];
    for(int i=0; i<q; i++){
        cin >> nome >> qtd >> p;
        Pizza pizza;
        pizza.nome = nome;
        pizza.qInicial = qtd;
        pizza.preco = p;
        pizza.estoque = qtd;
        mapa[nome] = pizza;
    }

    int qp;
    while(cin >> qp){
        if(qp == -1) break;
        string nome;
        cin >> nome;

        mapa[nome].estoque -= qp;
    }

    vector<Pizza> vet;
    // sort(mapa.begin(), mapa.end());

    for(auto val : mapa){
        val.second.calc();
        vet.push_back(val.second);
    }

    sort(vet.begin(), vet.end(), comp);

    for(auto val : vet){
        val.calc();
        cout << fixed << setprecision(2);
        cout << val.nome << " | " << val.qInicial << " | " << val.preco << " | " << val.estoque << " | " << val.consum << " | " << val.valSaldo << "\n";
    }
}