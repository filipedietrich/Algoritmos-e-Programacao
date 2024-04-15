/*

03. Para uma matriz Anxm de inteiros inicializada pelo usuário, crie um algoritmo para:
Copiar o conteúdo de A para uma matriz Bnxm.

*/

#include <iostream>

using namespace std;

int main(){

    int l, c;
    
    cout << "Digite a quantidade de linhas: ";
    cin >> l;
    cout << "Digite a quantidade de colunas: ";
    cin >> c;

    int a[l][c], b[l][c];

        cout << "Digite os termos da matriz A: \n";
        for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << "Digite o termo " << i + 1 << ", " << j + 1  << ": \n";
            cin >> a[i][j];
        }
    }

    cout << "A matriz A é igual a: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            b[i][j] = a[i][j];
        }
    }

    cout << "A matriz B é igual a: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}