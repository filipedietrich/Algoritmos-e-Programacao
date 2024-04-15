/*

10. Verificar se um inteiro é um número perfeito.

*/

#include <iostream>

using namespace std;

int main() {

    int n, sobra, soma;

    cout << "Digite um número: ";
    cin >> n;

    for(int i = 1; i < n; i++){
        
        sobra = n % i;

        if(sobra == 0){
            soma += i;
        }
    }

    if(soma == n){
        cout << n << " é um numero perfeito";
    }else{
        cout << n << " não é um numero perfeito";
    }

    return 0;
}