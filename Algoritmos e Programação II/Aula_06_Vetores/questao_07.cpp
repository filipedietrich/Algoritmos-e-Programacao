/*

Calcular a variância dos valores de um array.

*/
#include <iostream>

using namespace std;

void preencherArray(float array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite um número" << endl;
        cin >> array[i];
    }
}

void imprimirArray(float array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void fazMedia(float array[], int tam, float &media){
    float soma = 0;
    
    for(int i = 0; i < tam; i++){
        soma += array[i];
    }
    
    media = soma / tam;
}

void fazDesvio(float array[], float arrayD[], int tam, float media){
    float desvio = 0;
    for(int i = 0; i < tam; i++){
        desvio = media - array[i];
        
        if(desvio < 0){
            desvio *= -1;
        }
        
        arrayD[i] = desvio;
        
        desvio = 0;
    }
}

void fazVariancia(float arrayD[], int tam, float &variancia){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += (arrayD[i] * arrayD[i]);
    }
    
    variancia = soma / tam;
    
    cout << "A Variância vale: " << variancia << endl;
}




int main(){
   
    int tam = 5;
    float elementos[tam], desvio[tam],variancia = 0, media = 0;
    
  
    preencherArray(elementos, tam);
    cout << "Os elementos digitados foram: \n";
    imprimirArray(elementos, tam);
    fazMedia(elementos, tam, media);
    fazDesvio(elementos, desvio, tam, media);
    fazVariancia(desvio, tam, variancia);
    
    
    return 0;
}
