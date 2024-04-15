/*

Crie um algoritmo que os valores de um vetor são copiados para um outro vetor, ambos de mesmo tamanho.

*/


#include <iostream>

using namespace std;

int main(){
    int tam;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    
    int n[tam];
    int n2[tam];
    
    cout << "Digite os valores do vetor: \n";
    for (int i =0; i < tam; i++){
        cin >> n[i];

    }
    
    for(int i = 0; i < tam; i++){
        n2[i] = n[i];
    }

    cout << "Os valores armazenados no vetor 1 é igual a: ";
    for(int i = 0; i < tam; i++){
        cout << n[i] << " ";
    }
    
    cout << endl;
    
    cout << "Os valores armazenados no vetor 2 é igual a: ";
    for(int i = 0; i < tam; i++){
        cout << n2[i] << " ";
    }
    return 0;
}
