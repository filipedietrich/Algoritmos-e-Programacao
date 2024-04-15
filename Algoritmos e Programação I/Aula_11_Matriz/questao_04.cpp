/*

04. Leia uma matriz de nxn elementos.
Calcule a soma dos elementos que estão abaixo da diagonal principal.

*/

#include <iostream>

using namespace std;

int main(){

int n, soma;
    
    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> n;
    
    int a[n][n];

    cout << "Digite os elementos da matriz: \n";
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Digite o elemento " << i + 1 << ", " << j + 1  << ": \n";
            cin >> a[i][j];
        }
    }

    cout << endl;

    cout << "A matriz digitada foi: \n";
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                break;
            }else{
                soma += a[i][j];
            }
        }
    }

    cout << "\nA soma dos elementos abaixo da diagonal principal é igual a: " << soma;

    return 0;
}