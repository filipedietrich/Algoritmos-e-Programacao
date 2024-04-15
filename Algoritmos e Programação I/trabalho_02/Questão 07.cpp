/*

07. A prefeitura de uma cidade fez uma pesquisa com n pessoas, coletando dados sobre o salário. 
    A prefeitura deseja saber qual é o maior salário dentre os entrevistados.

*/

#include <iostream>

using namespace std;

int main() {

    int qtd;
    float salario, maior;

    cout << "Qual a quantidade de pessoas intrevistadas? ";
    cin >> qtd;

    for(int i = 1; i <= qtd; i++){
        cout << "Qual o salário da " << i << "ª pessoa? R$:";
        cin >> salario;

        if(i == 1){
            maior = salario;
        }else if(salario > maior){
            maior = salario;
        }
    }

    cout << "O maior salario dentre os entrevistados é de R$:" << maior;

    return 0;
}