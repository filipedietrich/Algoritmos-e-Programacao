/*

Crie dois vetores de inteiros, a e b, ambos de mesmo tamanho. 
Insira valores no vetor a. Através de um laço, 
copie os valores do vetor a para o vetor b de modo que b seja o inverso de a. 
Imprima os vetores.

*/

#include <iostream>

using namespace std;

int main(){
    int tam;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    
    int a[tam];
    int b[tam];
    
    cout << "Digite os valores do vetor A: \n";
    for (int i =0; i < tam; i++){
        cin >> a[i];
    }
    
    cout << endl;

    
    cout << "O Vetor A é igual: ";
    for (int i = 0; i < tam; i++)
    cout << a[i] << " ";
    
    cout << endl;
    
    int i = 0;
    while(i != tam){
        b[i] = a[tam - i - 1];
        i++;
    }
    
    cout << "O Vetor B é igual: ";
    for (int i = 0; i < tam; i++)
    cout << b[i] << " ";
    
}