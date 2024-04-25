/*

6. Crie funções com parâmetros que sejam ponteiros para os seguintes problemas:

a) Trocar os valores entre essas duas varáveis.
b) Encontrar o menor elemento de um array.


*/


#include <iostream>
using namespace std;

void trocaValor(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int menorElemento(int *arr, int tam){
    int menor = 0;
    for (int i = 0; i < tam; i++){
        if(i == 0){
            menor = arr[i];
        }else if(menor > arr[i]){
            menor = arr[i];
        }
    }
    return menor;
}

int main(){
    
    int a[1] = {8};
    int b[1] = {10};
    
    cout << "A antes: " << a[0] << endl;
    cout << "B antes: " << b[0] << endl << endl;
    
    trocaValor(a, b);
    
    cout << "A depois: " << a[0] << endl;
    cout << "B depois: " << b[0] << endl << endl;
    
    int arr[4] = {7, 6, 20, 5};
    int menor = menorElemento(arr, 4);
    cout << "O menor elemento do array é: " << menor << endl;
    
    

    return 0;
}