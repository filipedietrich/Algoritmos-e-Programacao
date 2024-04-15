/*

09. Realizar a soma dos dígitos de um inteiro n.

*/

#include <iostream>

using namespace std;

int main() {
    int qtd, n, soma;

    cout << "Digite a quantidade de algarimos do numero que deseja digitar: ";
    cin >> qtd;

    for(int i = 1; i <= qtd; i++){
        cout << "Qual o " << i << "º algarismo? ";
        cin >> n;
        soma += n;
    }

    cout << "A soma dos algarismos do número digitado é: " << soma;
    
    return 0;
}