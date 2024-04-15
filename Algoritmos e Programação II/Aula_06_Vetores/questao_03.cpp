/*

Verificar quantos valores distintos existem em um array

*/
#include <iostream>

using namespace std;

void preencherArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Qual o valor da posição " << i << endl;
        cin >> array[i];
    }
}

int verificar(int array[], int tam){
    int verificador;
    int contador;
    
    for(int i = 0; i < tam; i++){
        verificador = 0;
        for(int j = 0; j < tam; j++){
            if(array[i] != array[j]){
                cout << array[i] << " "<< array[j] << endl;
                verificador ++;
            }
        }
        if(verificador == 4){
            contador ++;
        }
    }
    
    return contador;
}


int main(){
   
    int tam = 5;
    int elementos[tam];
  
    preencherArray(elementos, tam);
    int verificador = verificar(elementos, tam);
    cout << "Existes " << verificador << " elementos distintos";
    
    
  

    return 0;
}
