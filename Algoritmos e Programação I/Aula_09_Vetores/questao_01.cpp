/*

Crie um algoritmo que deterina o maior e o menor valor de um vetor de inteiros.

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

    }
    
    int menor;
    for(int i = 0; i < tam; i++){
        if(i == 0){
            menor = n[0];
        }else if(n[i] < n[0]){
            menor = n[i];
        }
    }
    cout << "O menor valor digitado foi: " << menor << endl;
    
    int maior;
    for(int i = 0; i < tam; i++){
        if(i == 0){
            maior = n[0];
        }else if(n[i] > n[0]){
            maior = n[i];
        }
    }
    cout << "O maior valor digitado foi: " << maior << endl;
    
    return 0;
}
