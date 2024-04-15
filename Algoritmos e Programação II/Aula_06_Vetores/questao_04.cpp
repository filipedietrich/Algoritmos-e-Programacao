/*

Substituir valores ímpares por pares aleatórios em um array

*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void gerarNumeroAleatorio(int array[], int tam){

    int segundos = time(0);
    srand(segundos);
    int num;
     
    for(int i = 0; i < tam; i++){
        do{
            int numInicial = rand();
            num = numInicial % 100;
        }while(num % 2 != 0);
       
        array[i] = num;
    }
}

void preencherArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite um número primo" << endl;
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
void imprimirArrayPar(int array[], int tam){
    cout << "Substituindo os números primos por pares:\n";
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}


int main(){
   
    int tam = 5;
    int elementos[tam];
  
    preencherArray(elementos, tam);
    imprimirArray(elementos, tam);
    gerarNumeroAleatorio(elementos, tam);
    imprimirArrayPar(elementos, tam);
    
    return 0;
}
