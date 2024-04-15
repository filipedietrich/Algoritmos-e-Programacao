/*

Contar quantas vezes um determinado valor aparece no array

*/
#include <iostream>

using namespace std;

void preencherArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Qual o valor da posição " << i << endl;
        cin >> array[i];
    }
}

int contador(int array[], int tam){
    int valor, soma;
    
    cout << "Qual valor deseja verificar?\n";
    cin >> valor;
    
    for(int i = 0; i < tam; i++){
        if(array[i] == valor){
            soma ++;
        }
    }
    return soma;
}


int main(){
   
    int tam = 5;
    int elementos[tam];
  
    preencherArray(elementos, tam);
    
    int soma = contador(elementos, tam);
    cout << "O elemento aparece: " << soma << " vez(es)";
  

    return 0;
}
