/*

03. Calcule a subtração entre duas matrizes A e B.

*/

#include <iostream>

using namespace std;

int main(){

int n;
    
    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> n;
    
    int a[n][n], b[n][n], s[n][n];

    cout << "Para a matriz A: \n";
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

    cout << endl;

    cout << "Para a matriz B: \n";
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Digite o elemento " << i + 1 << ", " << j + 1  << ": \n";
            cin >> b[i][j];
        }
    }

    cout << endl;

    cout << "A matriz digitada foi: \n";
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            s[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << endl;

    cout << "A - B = \n";
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}