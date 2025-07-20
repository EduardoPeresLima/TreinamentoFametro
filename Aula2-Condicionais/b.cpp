#include<bits/stdc++.h>

using namespace std;

int main(){
    // Faça um programa que diga se um aluno passou de ano!
    // Peça a nota de um aluno, verifique o tipo de dado ideal (int, char, double, bool)
    // Se a nota for maior ou igual a 0 e menor que 6, diga que ele reprovou
    // Se a nota for maior ou igual 6 e menor 8, diga que ele ficará de recuperação
    // Se a nota for maior ou igual 8 e menor ou igual a 10, diga que ele passou
    // Se a nota estiver fora dos intervalor anteriores, diga que ele inseriu nota errada

    cout << "Insira sua nota: ";
    double nota; cin >> nota;

    if(nota >= 0 && nota < 6){
        cout << "Reprovado!" << endl;
    }
    else if(nota < 8){          //Também funcionaria (nota >= 6 && nota < 8)
        cout << "Recuperacao!" << endl;
    }
    else if(nota <= 10){        //Também funcionaria (nota >= 8 && nota <= 10)
        cout << "Aprovado!" << endl;
    }
    else{
        cout << "Nota incorreta!" << endl;
    }
}