/*

04. Para uma matriz Anxm de inteiros inicializada pelo usuário, crie um algoritmo para:
Determinar a transposta de A.

*/

#include <iostream>

using namespace std;

int main(){

int l, c;
    
    cout << "Digite a quantidade de linhas: ";
    cin >> l;
    cout << "Digite a quantidade de colunas: ";
    cin >> c;

    int a[l][c], t[l][c];

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
            t[i][j] = a[j][i];
        }
    }

    cout << "A matriz trasposta de A é igual a: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}