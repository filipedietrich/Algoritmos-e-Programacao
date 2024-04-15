/*

Para uma matriz Anxm de inteiros inicializada pelo usuário, crie um algoritmo para:
Determinar a soma dos números de cada linha.

*/

#include <iostream>

using namespace std;

int main(){

    int l, c, soma;
    
    cout << "Digite a quantidade de linhas: ";
    cin >> l;
    cout << "Digite a quantidade de colunas: ";
    cin >> c;

    int a[l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << "Digite o termo " << i + 1 << ", " << j + 1  << ": \n";
            cin >> a[i][j];
        }
    }

    cout << "A matriz digitada foi: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for(int i =0; i < l; i++){
        cout << "A soma dos números da linha " << i + 1 << " é igual a: ";
        for(int j = 0; j < c; j++){
            soma += a[i][j];
        }
        cout << soma;
        cout << endl;
        soma = 0;
    }
    


    return 0;
}