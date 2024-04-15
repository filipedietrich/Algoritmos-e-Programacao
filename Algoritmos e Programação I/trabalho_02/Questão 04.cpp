/*

04. Calcular a potência de um número n elevado a k.

*/

#include <iostream>

using namespace std;

int main() {

    int n, k, pot = 1;

    cout << "Qual numero deseja calcular a potência? ";
    cin >> n;
    cout << "Deseja elevar " << n << " a qual potência? ";
    cin >> k;

    for(int i = 1; i <= k; i++){
        pot *= n;
    }

    cout << n << "ˆ" << k << " = " << pot;

    return 0;
}