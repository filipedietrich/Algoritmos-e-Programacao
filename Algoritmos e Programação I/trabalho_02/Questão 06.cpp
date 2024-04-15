/*

Calcular a  média de n notas dos alunos de uma dada disciplina.

*/

#include <iostream>

using namespace std;

int main() {

    int qtd, i = 1;
    float nota, soma, media;

    cout << "Qual a quantidade de notas você deseja calcular a média? ";
    cin >> qtd;

    while(i <= qtd){
        cout << "Qual a " << i << "ª nota? ";
        cin >> nota;
        soma += nota;
        i++;
    }

    media = soma / qtd;

    cout << "A média de " << qtd << " notas é: " << media;

    return 0;
}