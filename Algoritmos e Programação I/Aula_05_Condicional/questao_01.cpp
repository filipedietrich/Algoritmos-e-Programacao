/*

Solicite ao usuário um número e apresente na tela qual é o dia da semana do 
respectivo número. Considere que os números fornecidos devem estar no
intervalo entre 1 e 7. Considere que 1 é domingo, 2 é segunda e assim por
diante. Indique se o número é inválido.

*/

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    
    cout << "Digite um numero de 1 até 7: " << endl;
    cin >> numero;
    
    if(numero == 1){
        cout << "Domingo" << endl;
    } else if (numero == 2){
        cout << "Segunda" << endl;
    } else if (numero == 3){
        cout << "Terça" << endl;
    } else if (numero == 4){
        cout << "Quarta" << endl;
    } else if (numero == 5){
        cout << "Quinta" << endl;
    } else if (numero == 6){
        cout << "Sexta" << endl;
    } else if (numero == 7){
        cout << "Sábado" << endl;
    } else {
        cout << "Número inválido" << endl;
    }

}