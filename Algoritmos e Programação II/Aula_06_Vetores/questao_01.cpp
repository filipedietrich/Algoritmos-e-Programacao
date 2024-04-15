/*

Verificar se um elemento existe em um array

*/
#include <iostream>

using namespace std;

void preencherArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Qual o valor da posição " << i << endl;
        cin >> array[i];
    }
}

int verificaElemento(int array[], int tam){
    bool existe =  false;
    int qualElemento;
    
    cout << "Qual elemento deseja verificar?\n";
    cin >> qualElemento;
    
    for(int i = 0; i < tam; i++){
        if(array[i] == qualElemento){
            existe = true;
            break;
        }
    }
    return existe;
}

int main(){
   
  int tam = 5;
  int elementos[tam];
  
  preencherArray(elementos, tam);
  int verifica = verificaElemento(elementos, tam);
  cout << "O elemento verificado existe no vetor: " << verifica;
  

    return 0;
}
