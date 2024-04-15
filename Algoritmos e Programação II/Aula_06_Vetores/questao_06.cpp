/*

Inverter o array

*/
#include <iostream>

using namespace std;

void preencherArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite um número" << endl;
        cin >> array[i];
    }
}

void imprimirArray(int array[], int tam){
    cout << "Os numeros digitados foram:\n";
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void inverteVetor(int array[], int arrayInv[], int tam){
    int j = tam - 1;
    for(int i = 0; i < tam; i++){
        arrayInv[i] = array[j];
        j--;
    }
}

void imprimirArrayInv(int array[], int tam){
    cout << "Invertendo o vetor temos:\n";
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}


int main(){
   
    int tam = 5;
    int divisor;
    int elementos[tam], elementosInv[tam];
    
  
    preencherArray(elementos, tam);
    imprimirArray(elementos, tam);
    inverteVetor(elementos, elementosInv, tam);
    imprimirArrayInv(elementosInv, tam);
    
    
    
    
    return 0;
}
