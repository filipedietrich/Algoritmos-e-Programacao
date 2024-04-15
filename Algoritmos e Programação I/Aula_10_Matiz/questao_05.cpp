/*

05. Para uma matriz Anxm de inteiros inicializada pelo usuário, crie um algoritmo para:
Determinar a diagonal principal de A.

*/

#include <iostream>

using namespace std;

int main(){

int l, c;
    
    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> l;

    int a[l][l];

    cout << "Digite os termos da matriz A: \n";
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            cout << "Digite o termo " << i + 1 << ", " << j + 1  << ": \n";
            cin >> a[i][j];
        }
    }

    cout << "A matriz A é igual a: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < l; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Os componentes da diagonal princial são: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < l; j++){
            if(i == j){
                cout << a[i][j] << " ";
            }
        }
    }



    return 0;
}