/*

01. Preencha uma matriz A nxm com (i + 5 ∗ j)%(i + j), 
sendo i e j as posições dos elementos em A. 
Em seguida imprima a matriz na tela.

*/

#include <iostream>

using namespace std;

int main(){

    int n, m;
    
    cout << "Digite a quantidade de linhas: ";
    cin >> n;
    cout << "Digite a quantidade de colunas: ";
    cin >> m;
    
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = ((i+1)+(5*(j+1))) % ((i+1)+(j+1));
        }
    }

    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}