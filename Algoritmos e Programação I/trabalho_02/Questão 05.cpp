/*

05. Determinar a série de fibonacci para um inteiro n.

*/

#include <iostream>

using namespace std;

int main() {

    int n, serie = 0, a = 0, b = 1;

    cout << "Qual número inteiro você deseja determinar a série de Fibonacci? ";
    cin >> n;
    cout << "A série Fibonacci de " << n << " é: ";

    for (int i = 0; i < n ; i++){
        if(i == 0){
            serie = a + a;
            cout << serie << " ";
            a = serie;
        } else if (i == 1){
            serie = a + b;
            cout << serie << " ";
        }else if(i == 2){
            serie = a + b;
            cout << serie << " ";
            a = serie;
        }else if (i == 3){
            serie = a + b;
            cout << serie << " ";
            b = a;
            a = serie;
        } else {
            serie = a + b;
            cout << serie << " ";
            b = a;
            a = serie;
        }  
    }

    return 0;
}