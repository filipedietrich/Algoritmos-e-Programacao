/*

03. Calcular os divisores de um número n em um intervalo de inteiros [a,b].

*/

#include <iostream>

using namespace std;

int main(){

    int n, a, b, soma = 0;

    cout << "Digite o numero que deseja verificar os divisores ";
    cin >> n;
    cout << "Digite o valor do primeiro numero do intervalo desejado: ";
    cin >> a;
    cout << "Digite o valor do último numero do intervalo desejado: ";
    cin >> b;
    cout << endl;

    for(a; a <= b; a++){
        if(n % a == 0){
            cout << n << " É divisivel por " << a << endl;
            soma++;
        }
    }

    cout << endl << n << " tem " << soma << " divisores";
    return 0;
}