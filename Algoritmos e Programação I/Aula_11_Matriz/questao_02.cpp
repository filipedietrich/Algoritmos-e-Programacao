/*

02. Gerar e imprimir uma matriz A de tamanho nxn, onde seus elementos são da forma:

	A[i][j] = 2*i + 7*j*2, se i < j;
    A[i][j] = 3*i^2*1, se i = j ;
    A[i][j] = 4*i^3+5*j^2 + 1, se i > j.


*/

#include <iostream>

using namespace std;

int main(){

    int n;
    
    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> n;
 
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                a[i][j] = (2*i) + (7*j*2);
            } else if(i == j){
                a[i][j] = (3*(i*i)*1);
            } else if (i > j){
               a[i][j] = (4*(i*i*i)) + (5*(j*j)) + 1;
            }
        }
    }

     for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}