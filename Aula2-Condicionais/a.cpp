#include<bits/stdc++.h>

using namespace std;

int main(){
    int idade;
    // cout << "Diga sua idade:";
    // cin >> idade;
    idade = 10; //crianca
    idade = 20; //adulto
    idade = 200; //velho

    if(idade < 18){ // Operadores
        cout << "Voce eh uma crianca" << endl;
    }
    else if(idade < 50){
        cout << "Voce eh um adulto" << endl;
    }
    else{
        cout << "Voce eh velho" << endl;
    }

    cout << "Finalizando o programa" << endl;
}