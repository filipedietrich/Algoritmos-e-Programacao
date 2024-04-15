/*

Somar os pares de uma sequência de números inteiros positivos de x a y.

*/

#include <iostream>

using namespace std;

int main(){
    int x = 0, y = 0;
    
    cout << "Qual o primeiro numero da sequencia? ";
    cin >> x;
    cout << "Qual o último numero da sequencia? ";
    cin >> y;
    
    int soma = 0;
    
    while(x <= y){
        if(x % 2 == 0){
            soma = soma + x;
        }
        x++;
        
    }

    cout << soma;
    return 0;
}