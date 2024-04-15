/*

02. Determinar a soma dos números primos em um intervalo de inteiros [a,b].

*/

#include <iostream>

using namespace std;

int main() {

    int a, a1, teste = 0, b;
    int soma;
    

    cout << "Digite o valor do primeiro numero do intervalo desejado: ";
    cin >> a;
    cout << "Digite o valor do último numero do intervalo desejado: ";
    cin >> b;

    a1 = a;

    for(a; a <= b; a++){

        teste = 0;

        for(int div = 1; div <= a; div++){
            if(a % div == 0){
               teste++; 
            }
        }
        if(teste == 2){
            soma += a;
        }
        
    }
    cout << "A soma dos números primos no intervalo [" << a1 << ", " << b << "] é: " << soma;

    return 0;
}
