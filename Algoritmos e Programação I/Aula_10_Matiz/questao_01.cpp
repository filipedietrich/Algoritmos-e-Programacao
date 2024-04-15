/*

01. Para uma matriz Anxm de inteiros inicializada pelo usuário, crie um algoritmo para: 
Imprimir os números divisíveis por um inteiro k.

*/

#include <iostream>

using namespace std;

int main(){

    int l, c, k;
    
    cout << "Digite a quantidade de linhas: ";
    cin >> l;
    cout << "Digite a quantidade de colunas: ";
    cin >> c;
    cout << "Digite o divizor: ";
    cin >> k;
    

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

    cout << "Os divisiveis por " << k << " são: \n";
    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] % k == 0){
                cout << a[i][j] << endl;
            }
        }
    }

    return 0;
}