/*

Crie um algoritmo que inicializa um vetor de modo que os elementos de índice par receberão os respectivos
elementos divididos por 2; os elementos de índice ímpar receberão os respectivos
elementos multiplicados por 3. Imprima o vetor. 

*/


#include <iostream>

using namespace std;

int main(){
    int tam;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    
    int n[tam];
    
    cout << "Digite os valores do vetor: \n";
    for (int i =0; i < tam; i++){
        cin >> n[i];
        
        if(i == 0){
            n[i] = n[i];
        }else if(i % 2 != 0){
            n[i] *= 3;
        }else if(i % 2 == 0){
            n[i] /= 2;
        }

    }
    cout << "O novo vetor vale: \n";
    for(int i = 0; i < tam; i++){
        cout << n[i] << " ";
    }
    return 0;
}
